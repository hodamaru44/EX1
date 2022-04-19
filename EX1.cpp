// EX1.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <iomanip>
#include "getBmi.h"
using namespace std;

int main()
{
    double height; //身長
    double weight; //体重
    double bmi;    //BMI
    double stdWsight;
    unsigned char grade;
    //キー入力をheightに格納する
    cout << "身長（M）を入力してください:";
    cin >> height;
    //キー入力をweightに格納する
    cout << "体重（kg）を入力してください:";
    cin >> weight;
    bmi = getBmi(height, weight);
  
    //BMIを画面に表示する
    cout << "あなたのBMIは、" <<fixed<<setprecision(1)<< bmi << "です。" << endl;
   
    if (bmi > 40) {
        cout << "肥満(4度）" << endl;
    }
    else if (bmi > 35)
    {
        cout << "肥満(3度)" << endl;
    }
    else if (bmi >30)
    {
        cout << "肥満(2度)" << endl;
    }
    else if (bmi >25)
    {
        cout << "肥満(1度）" << endl;
    }
    else if(bmi > 18.5)
    {
        cout << "普通体重" << endl;
    }
    else
    {
        cout << "低体重です。" << endl;
    }
    return 0;
}

// プログラムの実行: Ctrl + F5 または [デバッグ] > [デバッグなしで開始] メニュー
// プログラムのデバッグ: F5 または [デバッグ] > [デバッグの開始] メニュー

// 作業を開始するためのヒント: 
//    1. ソリューション エクスプローラー ウィンドウを使用してファイルを追加/管理します 
//   2. チーム エクスプローラー ウィンドウを使用してソース管理に接続します
//   3. 出力ウィンドウを使用して、ビルド出力とその他のメッセージを表示します
//   4. エラー一覧ウィンドウを使用してエラーを表示します
//   5. [プロジェクト] > [新しい項目の追加] と移動して新しいコード ファイルを作成するか、[プロジェクト] > [既存の項目の追加] と移動して既存のコード ファイルをプロジェクトに追加します
//   6. 後ほどこのプロジェクトを再び開く場合、[ファイル] > [開く] > [プロジェクト] と移動して .sln ファイルを選択します
