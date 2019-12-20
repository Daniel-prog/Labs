#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    string line, lastsen, it = "", ans;
    unsigned int scount = 0, b = 0, i = 0;

    vector<string> Words;

    ifstream in("text2.txt"); // �������� ���� ��� ������
    if (in.is_open()) //���� ���� ������
    {
        while (!in.eof()) { //---- ������� ���������� �����������, ���������� � scount
            getline (in, line);
            for (int i = 0; i < line.length(); i++) {
                if (line[i] == '.' || line[i] == '!' || line[i] == '?')
            scount++;
            }
        }// -------����� ����� ����� �����������

        in.clear(); //���������� ��������� �
        in.seekg(0);//������ ����� (����� ������ getline)

        vector<string> Sentences(scount);

        for (int i = 0; i < scount; i++) { //----���������� �� ����������� � ���. ������
            getline (in, Sentences[i], '.');
        }// ---- ����� ����� ������

        lastsen = Sentences[scount-1]; // ���������� ��������� ����������� � lastsen

        for (int i = 0; i < lastsen.length(); i++) { //---���������� � ���. ������ Words ����� ����. �����������

            if (lastsen[i] == ' ' || lastsen[i] == '.') {
                if (it != "") {
                    Words.push_back(it);
                }
            it="";
            continue;
            }
        it += lastsen[i];

        if (i == (lastsen.length()-1)) //����������� �������� ��� ��������, ���������� ����� ������� ���������� ��������� �����
            Words.push_back(it);
        }// ---����� ����� ������ ���� �� ���������� �����������

        for (int i = 0; i < Words.size(); i++) { // --- ���� ������ ������ �������� �����
            if (Words[i].length() > b) {         // !!!����� ����� �������� ��������, ���� ����� ����� �� �����
                b = Words[i].length();
                ans = Words[i];
            }
        }// --- ����� ����� ������
        cout << "����� ������� ����� ���������� �����������: " << ans;

        in.close();
    }

    return 0;
}

