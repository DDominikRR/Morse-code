#include <iostream>
#include <cstdlib>
#include <windows.h>

using namespace std;
string translateTtm(char let)
{
    string ret;
    /*if( !( ( (let>=65 && let<=90) || (let ==32) ) || (let>=48 && let<=57) ) )
    {
        ret = "error";
        return ret;
    }*/
    /*if(!( ( (let>=65 && let<=90) || (let>=48 && let<=57) ) || (let ==32) ) )
    {
        ret = "error";
        return ret;
    }*/

    switch(let)
    {
        case 46: // .
            {
                ret = ".-.-.- ";
                return ret;
                break;
            }
        case 44: // ,
            {
                ret = "--..-- ";
                return ret;
                break;
            }
        case 63: // ?
            {
                ret = "..--.. ";
                return ret;
                break;
            }
        case 39: // '
            {
                ret = ".----. ";
                return ret;
                break;
            }
        case 33: // !
            {
                ret = "-.-.-- ";
                return ret;
                break;
            }
        case 47: // /
            {
                ret = "-..-. ";
                return ret;
                break;
            }
        case 40: // (
            {
                ret = "-.--. ";
                return ret;
                break;
            }
        case 41: // )
            {
                ret = "-.--.- ";
                return ret;
                break;
            }
        case 38: // &
            {
                ret = ".-... ";
                return ret;
                break;
            }
        case 58: // :
            {
                ret = "---... ";
                return ret;
                break;
            }
        case 59: // ;
            {
                ret = "-.-.-. ";
                return ret;
                break;
            }
        case 61: // =
            {
                ret = "-...- ";
                return ret;
                break;
            }
        case 43: // +
            {
                ret = ".-.-. ";
                return ret;
                break;
            }
        case 45: // -
            {
                ret = "-....- ";
                return ret;
                break;
            }
        case 95: // _
            {
                ret = "..--.- ";
                return ret;
                break;
            }
        case 34: // "
            {
                ret = ".-..-. ";
                return ret;
                break;
            }
        case 36: // $
            {
                ret = "...-..- ";
                return ret;
                break;
            }
        case 64: // @
            {
                ret = ".--.-. ";
                return ret;
                break;
            }
        case 48: //0
            {
                ret = "----- ";
                return ret;
                break;
            }
        case 49: //1
            {
                ret = ".---- ";
                return ret;
                break;
            }
        case 50: //2
            {
                ret = "..--- ";
                return ret;
                break;
            }
        case 51: //3
            {
                ret = "...-- ";
                return ret;
                break;
            }
        case 52: //4
            {
                ret = "....- ";
                return ret;
                break;
            }
        case 53: //5
            {
                ret = "..... ";
                return ret;
                break;
            }
        case 54: //6
            {
                ret = "-.... ";
                return ret;
                break;
            }
        case 55: //7
            {
                ret = "--... ";
                return ret;
                break;
            }
        case 56: //8
            {
                ret = "---.. ";
                return ret;
                break;
            }
        case 57: //9
            {
                ret = "----. ";
                return ret;
                break;
            }
        case 32: //space
            {
                ret = "/ ";
                return ret;
                break;
            }
        case 65: //A
            {
                ret = ".- ";
                return ret;
                break;
            }
        case 66: //B
            {
                ret = "-... ";
                return ret;
                break;
            }
        case 67: //C
            {
                ret = "-.-. ";
                return ret;
                break;
            }
        case 68: //D
            {
                ret = "-.. ";
                return ret;
                break;
            }
        case 69: //E
            {
                ret =". ";
                return ret;
                break;
            }
        case 70: //F
            {
                ret = "..-. ";
                return ret;
                break;
            }
        case 71: //G
            {
                ret = "--. ";
                return ret;
                break;
            }
        case 72: //H
            {
                ret = ".... ";
                return ret;
                break;
            }
        case 73: //I
            {
                ret =".. ";
                return ret;
                break;
            }
        case 74: //J
            {
                ret =".--- ";
                return ret;
                break;
            }
        case 75: //K
            {
                ret = "-.- ";
                return ret;
                break;
            }
        case 76: //L
            {
                ret = ".-.. ";
                return ret;
                break;
            }
        case 77: //M
            {
                ret = "-- ";
                return ret;
                break;
            }
        case 78: //N
            {
                ret = "-. ";
                return ret;
                break;
            }
        case 79: //O
            {
                ret = "--- ";
                return ret;
                break;
            }
        case 80: //P
            {
                ret = ".--. ";
                return ret;
                break;
            }
        case 81: //Q
            {
                ret = "--.- ";
                return ret;
                break;
            }
        case 82: //R
            {
                ret = ".-. ";
                return ret;
                break;
            }
        case 83: //S
            {
                ret = "... ";
                return ret;
                break;
            }
        case 84: //T
            {
                ret = "- ";
                return ret;
                break;
            }
        case 85: //U
            {
                ret = "..- ";
                return ret;
                break;
            }
        case 86: //V
            {
                ret = "...- ";
                return ret;
                break;
            }
        case 87: //W
            {
                ret = ".-- ";
                return ret;
                break;
            }
        case 88: //X
            {
                ret = "-..- ";
                return ret;
                break;
            }
        case 89: //Y
            {
                ret = "-.-- ";
                return ret;
                break;
            }
        case 90: //Z
            {
                ret = "--.. ";
                return ret;
                break;
            }
        default:
            {
                ret = "error";
                return ret;
                break;
            }


    }
}
string toUpper(string text, int len)
{
    for(int i=0;i<=len-1;i++)
    {
        if(text[i]>=96 && text[i]<=122)
        {
            text[i] = text[i] - 32;
        }
    }
    return text;
}
string translateMtt(string let)
{
   // cout<<let<<" "<<let<<endl;
    string ret;
    //if(let == ".-") {ret = "a"; return ret;}
    //string a = ".-";
    if(let == ".-") {ret = "A"; return ret;}
    if(let == "-...") {ret = "B"; return ret;}
    if(let == "-.-.") {ret = "C"; return ret;}
    if(let == "-..") {ret = "D"; return ret;}
    if(let == ".") {ret = "E"; return ret;}
    if(let == "..-.") {ret = "F"; return ret;}
    if(let == "--.") {ret = "G"; return ret;}
    if(let == "....") {ret = "H"; return ret;}
    if(let == "..") {ret = "I"; return ret;}
    if(let == ".---") {ret = "J"; return ret;}
    if(let == "-.-") {ret = "K"; return ret;}
    if(let == ".-..") {ret = "L"; return ret;}
    if(let == "--") {ret = "M"; return ret;}
    if(let == "-.") {ret = "N"; return ret;}
    if(let == "---") {ret = "O"; return ret;}
    if(let == ".--.") {ret = "P"; return ret;}
    if(let == "--.-") {ret = "Q"; return ret;}
    if(let == ".-.") {ret = "R"; return ret;}
    if(let == "...") {ret = "S"; return ret;}
    if(let == "-") {ret = "T"; return ret;}
    if(let == "..-") {ret = "U"; return ret;}
    if(let == "...-") {ret = "V"; return ret;}
    if(let == ".--") {ret = "W"; return ret;}
    if(let == "-..-") {ret = "X"; return ret;}
    if(let == "-.--") {ret = "Y"; return ret;}
    if(let == "--..") {ret = "Z"; return ret;}

    if(let == "-----") {ret = "0"; return ret;}
    if(let == ".----") {ret = "1"; return ret;}
    if(let == "..---") {ret = "2"; return ret;}
    if(let == "...--") {ret = "3"; return ret;}
    if(let == "....-") {ret = "4"; return ret;}
    if(let == ".....") {ret = "5"; return ret;}
    if(let == "-....") {ret = "6"; return ret;}
    if(let == "--...") {ret = "7"; return ret;}
    if(let == "---..") {ret = "8"; return ret;}
    if(let == "----.") {ret = "9"; return ret;}

    if(let == ".-.-.-") {ret = "."; return ret;}
    if(let == "--..--") {ret = ","; return ret;}
    if(let == "..--..") {ret = "?"; return ret;}
    if(let == ".----.") {ret = ";"; return ret;}
    if(let == "-.-.--") {ret = "!"; return ret;}
    if(let == "-..-." ) {ret = "/"; return ret;}
    if(let == "-.--." ) {ret = "("; return ret;}
    if(let == "-.--.-") {ret = ")"; return ret;}
    if(let == ".-..." ) {ret = "&"; return ret;}
    if(let == "---...") {ret = ":"; return ret;}
    if(let == "-.-.-.") {ret = ";"; return ret;}
    if(let == "-...-" ) {ret = "="; return ret;}
    if(let == ".-.-." ) {ret = "+"; return ret;}
    if(let == "-....-") {ret = "-"; return ret;}
    if(let == "..--.-") {ret = "_"; return ret;}
    if(let == ".-..-.") {ret = "\""; return ret;}
    if(let =="...-..-") {ret = "$"; return ret;}
    if(let == ".--.-.") {ret = "@"; return ret;}

    ret = "error"; return ret;
}
void ttm(string text)
{
    int len = text.length();
    string morse = "";
    string add;
    char let;
    text = toUpper(text, len);
    for(int i=0;i<=len-1;i++)
    {
        let = text[i];
        //cout<<let<<" ";
        add = translateTtm(let);
        /*if(strcmp(add.c_str(), "error"))
        {
            cout<<"Wystapil blad!"<<endl;
            return;
        }*/
        morse = morse + add;
    }
    cout<<morse<<endl;;
}
void mtt(string code)
{
    int len = code.length();
    string text = "";
    string add;
    string let = "";
    string cur;
    string prev;
    string space = " ";
    for(int i=0;i<=len;i++)
    {
        prev = cur;
        cur = code[i];
// .- .- .- -> aaa

        if(cur == " " || i == len )
        {
            if(prev == " ") continue;
            if(prev == "/") continue;
            add = translateMtt(let);
            text = text + add;
            let = "";
        }
        else if(cur == "/")
        {
            text = text + space;
        }
        else
        {

            let = let + cur;
        }
    }
    cout<<text<<endl;
}
void playMorse(string code)
{
    int shortLeft  = 900;
    int shortRight = 175;
    int longLeft   = 900;
    int longRight  = 600;
    int shortSleep = 150;
    int longSleep  = 550;
    string cur;
    int len = code.length();
    for(int i=0;i<=len-1;i++)
    {
        cur = code[i];
        if(cur == ".") { Beep (shortLeft,shortRight); }
        if(cur == "-") { Beep (longLeft,longRight);   }
        if(cur == " ") { Sleep(shortSleep);           }
        if(cur == "/") { Sleep(longSleep);            }
    }
}
int main()
{
    bool exit;
    bool good;
    do{
        int choice;

        cout<<"What you can use:"<<endl;
        cout<<"Latin (Upper/lower): A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z"<<endl;
        cout<<"Numbers            : 0,1,2,3,4,5,6,7,8,9"<<endl;
        cout<<"Punctuation        : . , ? ! / ( ) & : ; = + - _ '' $ @ "<<endl;

        cout<<"Menu: "<<endl;
        cout<<"[1] Zamien na kod Morse'a"<<endl;
        cout<<"[2] Zamien z kodu Morse'a"<<endl;
        cout<<"[3] Odtworz kod Morse'a"<<endl;
        cout<<"[4] Zakoncz program"<<endl;
        cout<<"Wybor: ";
        good=0;
        do{
            cin>>choice;
            if(choice == 1 || choice == 2 || choice == 3 || choice == 4)
            {
                good = 1;
            }
            else
            {
                cout<<"Blad!"<<endl;
                cout<<"Sprobuj ponownie: ";
                cin.clear();
                cin.sync();
            }
        }while(!good);

        switch(choice)
        {
            case 1:
                {
                    system("cls");
                    cout<<"Podaj tekst do zamiany:" <<endl;
                    string text;
                    cin.clear();
                    cin.ignore();
                    getline(cin, text);
                    system("cls");
                    cout<<text<<endl;
                    ttm(text);
                    cout<<endl;
                    //cin.sync()
                    //cout<<text;
                    break;
                }
            case 2:
                {
                    system("cls");
                    cout<<"Podaj kod do zamiany:" <<endl;
                    string code;
                    cin.clear();
                    cin.ignore();
                    getline(cin, code);
                    system("cls");
                    cout<<code<<endl;
                    mtt(code);
                    cout<<endl;
                    //cin.sync()
                    //cout<<text;
                    break;
                }
            case 3:
                {
                    system("cls");
                    cout<<"Podaj kod do odtworzenia:" <<endl;
                    string code;
                    cin.clear();
                    cin.ignore();
                    getline(cin, code);
                    system("cls");
                    cout<<code<<endl;
                    playMorse(code);
                    cout<<endl;
                    break;
                }
            case 4:
                {
                    system("cls");
                    exit=1;
                    break;
                }
        }
    }while(!exit);
    return 0;
}
