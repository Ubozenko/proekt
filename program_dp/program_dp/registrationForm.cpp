#include "registrationForm.h"
#include "userinfoForm.h"

using namespace programdp;


System::Void registrationForm::pictureBox2_Click(System::Object^ sender, System::EventArgs^ e)
{
	userinfoForm^ userinfoform = gcnew userinfoForm;
	userinfoform->Show();
	this->Close();
}
