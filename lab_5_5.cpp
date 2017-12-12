#include <iostream>
#include <string>
using namespace std;

int main () {

    string playerName;
    int score = 0, life = 3;
    char choice1;
    char choice2;

  // ประกาศตัวแปรเพื่อรับการเลือกคำตอบของผู้เล่น
  // เช่นการเป็น ตัวเลขให้ประกาศเป็น int choice1;
  // ถ้ารับคำตอบเป็นตัวอักษร ให้ประกาศเป็น char choice1;
  //

  cout << "Welcome to Mini Adventure Game." << endl;
  cout << "Please enter your name : ";

  // เขียนคำสั่งรับชื่อ แล้วเก็บในตัวแปร playerName

    cin >> playerName;

    //cout << "character's name: ";
    //cin >> name2;

    // แสดงชื่อ โดยตัดให้เหลือแค่ 10 ตัวอักษร
    if (playerName.length() > 8) {
        cout << "Your name is too long!!!!" << endl;
        playerName.erase (playerName.begin()+8, playerName.end());
        cout << "Your name has been changed to " << playerName << endl;
    }
    else { cout << playerName << endl;}

  // เขียนคำสั่งแสดงผล คำบรรยายสภาพแวดล้อม สถานการณ์ และคำทักทายที่มีชื่อตัวละคร
  // เช่น cout << "Hello " << playerName << ". You are in Robinson. You are walking happily. Suddenly you realize that forgetting the wallet."
  // << " But you're lazy to get back to get it." << endl;

    cout << "Hello " << playerName << ". Welcome to Sword Art Online. " << "Select gender for your character." << endl;


  // เขียนคำสั่งแสดงผล คำถามให้ผู้ใช้ตัดสินใจ
  // เช่น
  cout << "What gender do you choose? (M) Men or ,(F) Women: ";



  // เขียนคำสั่งรับคำตอบจากผู้ใช้ แล้วให้คะแนนหรือทำโทษ จากการตัดสินใจนั้น
  // เช่น
     cin >> choice1;
     switch(choice1) {
        case 'M' : score += 50; cout << "You choose to be a man.." ; break;
        case 'F' : score += 30; cout << "You choose to be a woman..";
       }

  // ฝึกสร้างสถานการณ์และสร้างเงื่อนไข อีก 2 สถานการณ์
    cout << "start Game" << "This game will give you a choice between Will be a group of (m) Merchants or (a) Adventurers.";


      cin >> choice2;
     switch(choice2) {
        case 'm' : score += 30; cout << "You select a group of traders is to trade between each other. A highly lucrative But be careful, strife, which could bring disaster upon themselves." ; break;
        case 'a' : score += 40; cout << "Choose your adventure, you play as the battle lines. Slaughtering demons This contract is a risky fight, please forward the kill during any reprisals if it will make you die.";
       }


  // สรุปผลคะแนนและพลังชีวิต เช่น
  cout << "Congratulations! You win the game with " << score << "Score. See you next time on next game. GG." << endl;

  return 0;
}
