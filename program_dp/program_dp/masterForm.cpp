#include "masterForm.h"
#include "loginForm.h"
#include "stockForm.h"
#include "userinfoForm.h"
#include "reportForm.h"
#include "ProfileForm.h"

using namespace programdp;
System::Void masterForm::btbacktologin_Click(System::Object^ sender, System::EventArgs^ e)
{
	loginForm^ logform = gcnew loginForm;
	logform->Show();
	this->Close();
}

System::Void masterForm::button3_Click(System::Object^ sender, System::EventArgs^ e) {
	userinfoForm^ userinfoform = gcnew userinfoForm;
	userinfoform->Show();
	this->Hide();
}

System::Void masterForm::button2_Click(System::Object^ sender, System::EventArgs^ e) {
	stockForm^ stockform = gcnew stockForm;
	stockform->Show();
	this->Hide();
}

System::Void masterForm::button1_Click(System::Object^ sender, System::EventArgs^ e) {
	reportForm^ reportform = gcnew reportForm;
	reportform->Show();
	this->Hide();
}

System::Void masterForm::button4_Click(System::Object^ sender, System::EventArgs^ e) {
	ProfileForm^ Profileform = gcnew ProfileForm;
	Profileform->Show();
	this->Hide();
}