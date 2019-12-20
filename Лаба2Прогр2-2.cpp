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

    ifstream in("text2.txt"); // окрываем файл для чтения
    if (in.is_open()) //если файл открыт
    {
        while (!in.eof()) { //---- считаем количество предложений, записываем в scount
            getline (in, line);
            for (int i = 0; i < line.length(); i++) {
                if (line[i] == '.' || line[i] == '!' || line[i] == '?')
            scount++;
            }
        }// -------конец блока счёта предложений

        in.clear(); //возвращаем указатель в
        in.seekg(0);//начало файла (после работы getline)

        vector<string> Sentences(scount);

        for (int i = 0; i < scount; i++) { //----записываем по предложению в дин. массив
            getline (in, Sentences[i], '.');
        }// ---- конец блока записи

        lastsen = Sentences[scount-1]; // записываем последнее предложение в lastsen

        for (int i = 0; i < lastsen.length(); i++) { //---записываем в дин. массив Words слова посл. предложения

            if (lastsen[i] == ' ' || lastsen[i] == '.') {
                if (it != "") {
                    Words.push_back(it);
                }
            it="";
            continue;
            }
        it += lastsen[i];

        if (i == (lastsen.length()-1)) //предложение приходит без символов, приходится таким образом записывать последнее слово
            Words.push_back(it);
        }// ---конец блока записи СЛОВ ИЗ ПОСЛЕДНЕГО ПРЕДЛОЖЕНИЯ

        for (int i = 0; i < Words.size(); i++) { // --- блок поиска самого длинного слова
            if (Words[i].length() > b) {         // !!!также можно дописать проверку, если слова равны по длине
                b = Words[i].length();
                ans = Words[i];
            }
        }// --- конец блока поиска
        cout << "Самое длинное слово последнего предложения: " << ans;

        in.close();
    }

    return 0;
}

