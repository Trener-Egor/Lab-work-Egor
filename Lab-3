#include <iostream>
#include<random>
#include<cmath>
#include<string>
using namespace std;
int main()
{
	random_device rd;
	int n;
	cin >> n;
	switch (n) {
	case 1: {
		int start;
		int end;
		int a;
		cin >> start >> end >> a;
		int arr[10];
		arr[0] = (rd() % 10) + 1;
		cout << arr[0] << endl;
		for (int i = 1; i < 10; ++i) {
			arr[i] = (rd() % (end - start + 1) + start);
			cout << arr[i] << endl;
		}
		int m = arr[0];
		for (int i = 0; i < 10; ++i) {
			arr[i] = ((arr[i] * 2 - a) / m);
			cout << arr[i] << ' ';
		}
		break;
	}
	case 2: {
		int start;
		int end;
		cin >> start >> end;
		int s = 0;
		int sk = 0;
		int s0_5 = 0;
		int sk1_k2 = 0;
		int k1 = 2;
		int k2 = 8;
		int ssa = 0;
		int ssas1_s2 = 0;
		int s1 = 5;
		int s2 = 9;
		const int N = 20;
		int arr[N];
		for (int i = 0; i < N; ++i) {
			arr[i] = (rd() % (end - start + 1) + start);
			cout << arr[i] << ' ';
		}
		for (int i = 0; i < 10; ++i) {
			s = s + arr[i];
			sk = sk + pow(arr[i], 2);
			if (i < 7) {
				s0_5 = s0_5 + arr[i];
			}
			if (i >= k1 && i <= k2) {
				sk1_k2 = sk1_k2 + arr[i];
			}
			ssa = ssa + arr[i];
			if (i == 9) {
				ssa = ssa / 10;
			}
			if (i >= s1 && i <= s2) {
				ssas1_s2 = ssas1_s2 + arr[i];
			}
			if (i == s2) {
				ssas1_s2 = ssas1_s2 / (s2 - s1 + 1);
			}
			cout << arr[i] << ' ';
		}
		cout << endl;
		cout << "s=" << s << ' ' << "sk=" << sk << ' ' << "s0_5=" << s0_5 << ' ' << "sk1_k2=" << sk1_k2 << ' ' << "ssa=" << ssa << ' ' << "sas1_s2s=" << ssas1_s2 << ' ' << endl;
		break;
	}
	case 3: {
		int start;
		int end;
		cin >> start >> end;
		const int N = 20;
		int arr[N];
		for (int i = 0; i < N; ++i) {
			arr[i] = (rd() % (end - start + 1) + start);
			cout << arr[i] << ' ';
		}
		cout << endl;
		for (int i = 0; i < 3; ++i) {
			int b;
			b = arr[N - 3 + i];
			arr[N - 3 + i] = arr[i];
			arr[i] = b;
		}
		for (int i = 0; i < N; ++i) {
			cout << arr[i] << ' ';
		}
		break;
	}
	case 4: {
		int start;
		int end;
		cin >> start >> end;
		const int N = 20;
		int arr[N];
		for (int i = 0; i < N; ++i) {
			arr[i] = (rd() % (end - start + 1) + start);
			cout << arr[i] << ' ';
		}
		cout << endl;
		for (int i = 19; i >= 0; --i) {
			if (arr[i] < 0) {
				for (int k = i; k < 19; ++k) {
					arr[k] = arr[k + 1];
				}
				arr[19] = 0;
				for (int i = 0; i < 20; ++i) {
					cout << arr[i] << ' ';
				}
				cout << endl;
				break;
			}
		}
		for (int i = 18; i >= 0; --i) {
			if (arr[i] % 2 == 0) {
				for (int k = i; k < 18; ++k) {
					arr[k] = arr[k + 1];
				}
				arr[18] = 0;
				for (int i = 0; i < 20; ++i) {
					cout << arr[i] << ' ';
				}
				break;
			}
		}
		break;
	}
	case 5: {
		string str;
		cin >> str;
		if (str.size() % 2 == 0) {
			cout << "even";
		}
		else {
			cout << "odd";
		}
	}
	case 6: {
		string str1;
		string str2;
		cin >> str1 >> str2;
		if (str1.size() > str2.size()) {
			cout << "true";
		}
	}
	case 7: {
		string str1;
		string str2;
		string str3;
		cin >> str1 >> str2 >> str3;
		int a = str1.size();
		int b = str2.size();
		int c = str3.size();
		int arr[3];
		arr[0] = a;
		arr[1] = b;
		arr[2] = c;
		int max = 0;
		for (int i = 0; i < 3; ++i) {
			if (arr[i] > max) {
				max = arr[i];
			}
		}
		if (max == arr[0]) {
			cout << "the_longest-" << str1 << endl;
		}
		if (max == arr[1]) {
			cout << "the_longest-" << str2 << endl;
		}

		if (max == arr[2]) {
			cout << "the_longest-" << str3 << endl;
		}
		int min = 100;
		for (int i = 0; i < 3; ++i) {
			if (arr[i] < min) {
				min = arr[i];
			}
		}
		if (min == arr[0]) {
			cout << "the_shortest-" << str1 << endl;
		}
		if (min == arr[1]) {
			cout << "the_shortest-" << str2 << endl;
		}
		if (min == arr[2]) {
			cout << "the_shortest-" << str3 << endl;
		}
		break;
	}
	case 8: {
		string str;
		cin >> str;
		int a = str.size();
		for (int i = 1; i <= a; ++i) {
			str = '*' + str + '*';
		}
		cout << str;
	}
	case 9: {
		string str;
		cin.ignore();
		getline(cin, str);
		double s = str.length();
		double a = 0;
		cout << s << endl;
		for (int i = 0; i < s; ++i) {
			if (str[i] == 'a') {
				a = a + 1;
			}
		}
		double p;
		p = (a * 100 / s);
		cout << "p=" << p << '%';
		break;
	}
	case 10: {
		string str = "Can you can a can as a canner can can a can?";
		string result;
		for (int i = 0; i < str.size(); ++i) {
			if (i < str.size() - 3 && str[i] == 'c' && str[i + 1] == 'a' && str[i + 2] == 'n' && (str[i + 3] == ' ' || str[i + 3] == '?')) {
				result += "new_word";
				i += 3;
			}
			result += str[i];
		}
		cout << result;
		break;
	}
	}
}
