#include <string>
#include <Windows.h>

void replace_str(std::string& str, const std::string& from, const std::string& to);
std::wstring s2ws(const std::string& s);

int main(int argc, char* argv[])
{
	std::string base_url = "https://duckduckgo.com/?q=%5C";

	char* query = GetCommandLineA();
	if (*query == '"') {
		++query;
		while (*query)
			if (*query++ == '"')
				break;
	}
	else {
		while (*query && *query != ' ' && *query != '\t')
			++query;
	}

	while (*query == ' ' || *query == '\t')
		query++;

	base_url += query;
	replace_str(base_url, " ", "%20");
	replace_str(base_url, "\"", "\\\"");
	replace_str(base_url, "+", "%2B");
	std::wstring url = s2ws(base_url);
	ShellExecute(nullptr, nullptr, url.c_str(), nullptr, nullptr, SW_SHOW);
}

void replace_str(std::string& str, const std::string& from, const std::string& to)
{
	if (from.empty())
		return;
	size_t start_pos = 0;
	while ((start_pos = str.find(from, start_pos)) != std::string::npos)
	{
		str.replace(start_pos, from.length(), to);
		start_pos += to.length();
	}
}

std::wstring s2ws(const std::string& s)
{
	int len;
	int slength = (int)s.length() + 1;
	len = MultiByteToWideChar(CP_ACP, 0, s.c_str(), slength, 0, 0);
	wchar_t* buf = new wchar_t[len];
	MultiByteToWideChar(CP_ACP, 0, s.c_str(), slength, buf, len);
	std::wstring r(buf);
	delete[] buf;
	return r;
}
