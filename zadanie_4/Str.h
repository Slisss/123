#pragma once
#pragma warning(disable : 4996)
#include <cstring>


class Str {
	char* m_pszText;
public:
	size_t length;
	Str() 
	{
		m_pszText = new char[1] {0};
		length = strlen(m_pszText);
	}

	Str(const char* p)
	{
		if (p) {
			m_pszText = new char[strlen(p) + 1];
			strcpy_s(m_pszText, strlen(p) + 1, p);
		}
		else
			m_pszText = new char[1] {0};
		length = strlen(m_pszText);
	}

	Str(const Str& s)
	{
		m_pszText = new char
			[strlen(s.m_pszText) + 1];
		strcpy_s(m_pszText,
			strlen(s.m_pszText) + 1,
			s.m_pszText);
		length = strlen(m_pszText);
	}

	~Str() { delete[]m_pszText; }

	const char* getStr() const {
		return m_pszText;
	}

	operator const char* ()const { return m_pszText; }

	Str operator +(const char* sz) const {
		Str result = *this;
		result += sz;
		return result;
	}

	const Str& operator =(const Str& s)
	{
		if (&s == this) return *this;
		delete[] m_pszText;
		m_pszText = new char[strlen(s.m_pszText) + 1];
		strcpy_s(m_pszText, strlen(s.m_pszText) + 1, s.m_pszText);
		return *this;
	}

	Str& operator	+=(const char* sz) {
		size_t newLength = length + strlen(sz);
		char* data = new char[newLength + 1];
		strcpy(data, m_pszText);
		strcat(data, sz);

		delete[] m_pszText;
		m_pszText = data;
		length = newLength;

		return *this;
	}
};