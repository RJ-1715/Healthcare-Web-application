#include <iostream>
#include <string>

using namespace std;

int main() {
  string name;
  int age;

  cout << "Welcome to the MediCare Chatbot" << endl;
  cout << "What is your name?" << endl;
  getline(cin, name);

  cout << "Hello, " << name << "! How old are you?" << endl;
  cin >> age;

  if (age >= 18) {
    cout << "You are an adult. Please answer the following questions:" << endl;
    // ask healthcare-related questions for adults
  } else {
    cout << "You are a minor. Please ask your parent or guardian to answer the following questions:" << endl;
    // ask healthcare-related questions for minors
  }

  cout << "Please describe your symptoms:" << endl;
  string symptoms;
  cin.ignore(); // ignore previous newline character
  getline(cin, symptoms);

cout << "Based on your symptoms, you may have the following conditions:" << endl;
  if (symptoms.find("fever") != string::npos || symptoms.find("chills") != string::npos || symptoms.find("fatigue") != string::npos) {
    cout << "- Influenza" << endl;
  }
  if (symptoms.find("cough") != string::npos || symptoms.find("shortness of breath") != string::npos) {
    cout << "- COVID-19" << endl;
  }
  if (symptoms.find("headache") != string::npos || symptoms.find("nausea") != string::npos || symptoms.find("vomiting") != string::npos) {
    cout << "- Migraine" << endl;
  }
  if (symptoms.find("stomach pain") != string::npos || symptoms.find("diarrhea") != string::npos) {
    cout << "- Gastroenteritis" << endl;
  }
    cout<<"For further inquiries book appointment"<<endl;
  
   string input;
   getline(cin, input);
  if (input == "can i schedule an appointment online?")
        {
            cout << "Yes, you can schedule an appointment online through our website." << endl;
        }
        else if (input == "what services do you offer?")
        {
            cout << "We offer a variety of services including routine checkups, vaccinations, and lab work. Please visit our website for a full list of services." << endl;
        }
  cout << "Thank you for using our service. Goodbye!" << endl;

  return 0;
}
