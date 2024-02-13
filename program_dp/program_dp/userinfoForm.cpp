#include "userinfoForm.h"
#include "registrationForm.h"

using namespace programdp;

System::Void userinfoForm::button4_Click(System::Object^ sender, System::EventArgs^ e) {
	registrationForm^ registrationform = gcnew registrationForm;
	registrationform->Show();
	this->Hide();
}
