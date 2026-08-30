#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n, d;
	cin >> n >> d;
	for (int i = 0; i < n; i++)
	{
		int opt;
		string s, ans;
		cin >> opt >> s;
		if (s[0] == '-') { s = s.substr(1); ans += '-'; }
		size_t pos = s.find('.');
		switch (opt)
		{
		case 1:
		{
			if (pos == string::npos)ans += s + "." + string(d, '0');
			else if (s.substr(pos + 1).size() <= d)
			{
				string frac = s.substr(pos + 1);
				while ((int)frac.size() < d) frac += '0';
				ans += s.substr(0, pos) + "." + frac;
			}
			else
			{
				string intp = s.substr(0, pos);
				string frac = s.substr(pos + 1);
				string keep = frac.substr(0, d);
				bool up = (frac[d] >= '5');
				if (up)
				{
					int c = 1;
					for (int k = d - 1; k >= 0; --k)
					{
						int v = keep[k] - '0' + c;
						keep[k] = char('0' + v % 10);
						c = v / 10;
						if (!c) break;
					}
					if (c)
					{
						int idx = (int)intp.size() - 1;
						while (idx >= 0 && intp[idx] == '9') { intp[idx] = '0'; --idx; }
						if (idx >= 0) intp[idx] = char(intp[idx] + 1);
						else intp = "1" + intp;
					}
				}
				ans += intp + "." + keep;
			}
			break;
		}
		case 2:
		{
			if (pos == string::npos) ans += s + "." + string(d, '0');
			else if (s.substr(pos + 1).size() <= d)
			{
				string frac = s.substr(pos + 1);
				while ((int)frac.size() < d) frac += '0';
				ans += s.substr(0, pos) + "." + frac;
			}
			else
			{
				string intp = s.substr(0, pos);
				string frac = s.substr(pos + 1);
				ans += intp + "." + frac.substr(0, d);
			}
			break;
		}
		case 3:
		{
			if (pos == string::npos)ans += s + "." + string(d, '0');
			else if (s.substr(pos + 1).size() <= d)
			{
				string frac = s.substr(pos + 1);
				while ((int)frac.size() < d) frac += '0';
				ans += s.substr(0, pos) + "." + frac;
			}
			else {
				string intp = s.substr(0, pos);
				string frac = s.substr(pos + 1);
				string keep = frac.substr(0, d);
				char next = frac[d];
				bool up;
				if (next < '5')up = false;
				else if (next > '5')up = true;
				else
				{
					bool tailNonZero = false;
					for (size_t k = d + 1; k < frac.size(); ++k)
						if (frac[k] != '0') { tailNonZero = true; break; }
					if (tailNonZero) up = true;
					else up = ((keep[d - 1] - '0') % 2 == 1);
				}
				if (up)
				{
					int c = 1;
					for (int k = d - 1; k >= 0; --k)
					{
						int v = keep[k] - '0' + c;
						keep[k] = char('0' + v % 10);
						c = v / 10;
						if (!c) break;
					}
					if (c)
					{
						int idx = (int)intp.size() - 1;
						while (idx >= 0 && intp[idx] == '9') { intp[idx] = '0'; --idx; }
						if (idx >= 0) intp[idx] = char(intp[idx] + 1);
						else intp = "1" + intp;
					}
				}
				ans += intp + "." + keep;
			}
			break;
		}
		}
		bool zero = true;
		for (char c : ans)
			if (c != '-' && c != '.' && c != '0') { zero = false; break; }
		if (zero) 
		{
			string t;
			for (char c : ans) if (c != '-') t += c;
			ans = t;
		}
		cout << ans << "\n";
	}
	return 0;
}