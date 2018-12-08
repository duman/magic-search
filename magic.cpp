#include <string>
#include <Windows.h>

void replace_str(std::string& str, const std::string& from, const std::string& to);

int main(int argc, char* argv[])
{
	std::string base_url = "https://www.google.com/search?q=";

	char *query = GetCommandLine();
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
	base_url += "&btnI"; // feeling lucky button
	ShellExecute(nullptr, nullptr, base_url.c_str(), nullptr, nullptr, SW_SHOW);
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
