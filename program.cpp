
#include<iostream>
#include<string>
#include<vector>
#include <conio.h>
#include<fstream>
#include<string.h>
#include <cstdlib>
#include "C:\Users\S\Downloads\faculity.cpp"
using namespace std;

// Class For Display Welcome Screen


class Welcome
{
    public:
    Welcome()
    {

    // Display Welcome message
    cout<<endl;
    cout<<"*******************************************************************\n";
    cout<<"*                                                                 *\n";
    cout<<"*               Welcome to GC University Management               *\n";
    cout<<"*                                                                 *\n";
    cout<<"*******************************************************************\n";
    // Display about university
    cout<<"\nGovernment College University, Faisalabad has emerged as a leading center of learning and research in a short span of time. The University with its dynamic faculty and innovative syllabi has become a catalyst of intellectual, social and industrial change. It caters to the diverse needs of society by imparting education in almost all the major fields of learning.\n";
    
    }
    void DisplayMenue()
    {
        // Display Menue box
        cout<<endl;
        cout<<"*******************************************************************\n";
        cout<<"*                                                                 *\n";
        cout<<"*                   Main Menue- Choose Your Choice                *\n";
        cout<<"*                                                                 *\n";
        cout<<"*******************************************************************\n";
        cout<<"*                                                                 *\n";
        cout<<"*  1. About Us                                                    *"<<endl;
        cout<<"*   - Learn about our history, mission, and academic departments. *"<<endl;
        cout<<"*                                                                 *"<<endl;
        cout<<"*  2. Contact Us                                                  *"<<endl;
        cout<<"*  - Find out how to get in touch with the university.            *"<<endl;
        cout<<"*                                                                 *"<<endl;
        cout<<"*  3. Help/FAQ                                                    *"<<endl;
        cout<<"*  - Get answers to frequently asked questions or submit a query. *"<<endl;
        cout<<"*                                                                 *"<<endl;
        cout<<"*  4. Admissions                                                  *"<<endl;
        cout<<"*   - Explore admission criteria and apply for programs.          *"<<endl;
        cout<<"*                                                                 *"<<endl;
        cout<<"*  5. Faculty                                                     *"<<endl;
        cout<<"*   - Explore Faculty and Offer Programs.                         *"<<endl;
        cout<<"*                                                                 *"<<endl;
        cout<<"*  6. Offices                                                     *"<<endl;
        cout<<"*   - Explore University Essential offices.                       *"<<endl;
        cout<<"*                                                                 *"<<endl;
        cout<<"*  8. Exit                                                        *"<<endl;
        cout<<"*   - Close the system.                                           *"<<endl;
        cout<<"*                                                                 *"<<endl;
        cout<<"*******************************************************************"<<endl;
    }
};

// Class For About us

class AboutUs

{
    public:
    AboutUs()
    {
        cout<<endl;
        char choice;
        int KeepRunning=1;
        DisplayMenue();
        while (KeepRunning!=0)
        {
            cout<<"\nEnter the number of your choice _:";
            cin>>choice;
            if(choice>='0' && choice<='9')
            {
                switch (choice)
                {
                    case '1':
                    {
                        // City Detail
                        Faisalabad();
                        DisplayMenue();
                        break;
                    }
                    case '2':
                    {
                        // History
                        History();
                        DisplayMenue();
                        break;
                    }
                    case '3':
                    {
                        //Vision, Mission & Goals
                        MissionGoals();
                        DisplayMenue();
                        break;
                    }
                    case '4':
                    {
                        // Current Policies
                        Policies();
                        DisplayMenue();
                        break;
                    }
                    case '5':
                    {
                        // Facilities
                        Facilities();
                        DisplayMenue();
                        break;
                    }
                    case '6':
                    {
                        // offices
                        cout<<"Office portal is under construction/n please wait !!!";
                        break;
                    }
                    case '8':
                    {
                        // Exit
                        KeepRunning=0;
                        break;
                    }
                    default:
                    {
                        cout<<"\nInvalid input!\nPlease enter a valid number.\n";
                    }
                }
            }
            else
            {
                cout<<"\nInvalid input!\nPlease enter a choice in form of number.\n";
            }
        }

            
    }
    // Selection
    void DisplayMenue()
    {
        cout<<endl;
        cout<<"***************************************"<<endl;
        cout<<"*              About US               *"<<endl;
        cout<<"***************************************"<<endl;
        cout<<"*                                     *"<<endl;
        cout<<"* 1. The Faisalabad City              *"<<endl;
        cout<<"* 2. History of the Institute         *"<<endl;
        cout<<"* 3. Vision, Mission & Goals          *"<<endl;
        cout<<"* 4. Current Policies                 *"<<endl;
        cout<<"* 5. Facilities                       *"<<endl;
        cout<<"* 6. Exit to Main Menu                *"<<endl;
        cout<<"*                                     *"<<endl;
        cout<<"***************************************"<<endl;
        cout<<endl;

    }
    // Faisalabad City
    void Faisalabad()
    {
        cout<<endl;
        cout<<"-> Faisalabad City History\n";
        cout<<"   Faisalabad, the Manchester of Pakistan is one of the first planned and systematic cities in the sub continent envisaged by the British Government, after the name of Sir James Lyall. Lyallpur was the first name ascribed to this fertile land of Sandal Bar. The unique bond present between the sister countries Pakistan and Saudi Arabia paved the way to rename the city after the name of our friend, late King of Saudi Arabia, King Faisal.\n The City is catering to the needs of more than six million people. Agriculture and industry remains the hallmark of Faisalabad with a powerful and ever developing thrust in these sectors. Faisalabad International Airport, Faisalabad Dry Port and Industrial Zone linked with the Motorway are facilitating this hub of industrial activities.The historical Clock-Tower with Eight Bazars designed after Union Jack, presents a magnificent example of town planning located in the province of Punjab to the west of Lahore, the provincial capital. With the proper infrastructure, road linkages Faisalabad serves as an example as district, as division and as a city for the developing world. The Faisalabad International cricket and hockey stadiums host international matches. The city has produced great leadership in the fields of politics, commerce, education, health, sports, agriculture, economy, bureaucracy and biotechnology.";
    }
    // institute Detailed History
    void History()
    {
        cout<<endl;
        cout<<"-> History Of University\n";
        cout<<"   Government College University, Faisalabad has emerged as a leading center of learning and research in a short span of time. The University with its dynamic faculty and innovative syllabi has become a catalyst of intellectual, social and industrial change. It caters to the diverse needs of society by imparting education in almost all the major fields of learning.\nThe Government College University’s journey started as a primary school in 1897 in the present building of Government College for Women, Karkhana Bazar, Faisalabad. It was promoted to High School and Intermediate College in 1905 and 1924 respectively. It was elevated to the degree level in 1933 and postgraduate disciplines were introduced in 1963. The long journey that started with the humble beginning reached its climax when it was granted the status of University in October 2002.\nThe Government University, Faisalabad has a long history of excellence and distinction as an institution. Renowned scholars and eminent personalities have served this institution in various capacities at various stages of its history. It has produced outstanding personnel who have earned great fame not only for themselves but also for the nation.\nThe luminaries like Mr. Abdul Hameed, Mr. W.H.F. Armstrong, Mr. Lala Chattan Annand, Mr. Hashmat Khan, Mr. Taj Khyal, Mr. Namdar Khan, Mr. Karamat Hussain Jafari, Mr. Mukhtar Mahmood Qureshi, Mr. Asmat ullah Khan, Dr. Asif Iqbal Khan and Dr. Arif Zaidi have served this institution.\nThe university is situated at the Jhang Road not far from the historical Clock Tower. The main campus is spread on 37 acres and the construction of new campus has been started on an area of 200 acres some 3-4 kilometers away from the main campus at Jhang Road.\nThe University is offering educational degrees in different disciplines. The University is a hub of educational, social and cultural activities with a close liaison with industry.";
    }
    void MissionGoals()
    {
        cout<<endl;
        cout<<"-> Vision\n";
        cout<<"   We believe in empowering our youth with professional capabilities for enabling them to contribute towards the sustainable socio-economic progress of the country and for the greater good of mankind, regionally as well as globally.\n";
        cout<<endl;
        cout<<"-> Mission \n";
        cout<<"   To enable the future generations with strong foundation of ethical standards, professional competence, social tolerance and inspiring leadership to contribute on social, economic, cultural, technological and entrepreneurial fronts for an inclusive and prosperous future.\n";
        cout<<endl;
        cout<<"-> Goals\n";
        cout<<"   The University’s goal is to be among the top 1000 best universities in the world and among the top 3 universities in Pakistan by the year 2020. The University will bring Engineering and Medical education in its domain as well in addition to build a state of the art Technology Park – First in a kind in Pakistan.\n";
    }
    void Policies()
    {
        cout<<endl;
        cout<<"-> Policies\n";
        cout<<" Human Resources (HR) create organization and make them survive for rapid progress. HR policies in the Universities are of special nature and significance. The whole body consists of three broad categories namely teachers, students and administrative & laboratory staff. Management of teachers, staff and students is different from the administrative policies of industrial units business concerns and production farms. Special conductive environment is to be developed for studies, research and technology transfer efforts. In formulating the policies, input of all sections of community should be kept in view.\nAs a general policy, the university shall attract highly qualified staff (Ph.Ds) and arrange to train the young staff in three ways. Firstly by granting admission to M.Phil / Ph.D programs within the University, secondly, outside the University but within Pakistan and thirdly abroad. Teachers shall be encouraged and arrangements will be made for continuous training through short courses and Post-Doctoral training both within the country and abroad.\nIn recruitment of staff at all levels, principles of suitability cum fitness based on merit should be adhered to. Congenial work environment, cordiality of behavior and incentives for career building should be provided and there should be built in provisions in the system.\nBeing a public sector organization, we have to follow the government rules and also the spirit of the decision of the Supreme Court of Pakistan regarding recruitment. All posts shall be advertised in the National Press with qualification and experience as per approved University Act and Statues of each post. The syndicate approves the recommendations of the Selection Board of the University for BPS-17 through BPS-21 posts and Vice Chancellor approves the recommendations of the appointment committees for BPS-01 through BPS-16 posts. As a retention policy, research contribution and efficiency has to be reviewed in time and continuous made.\n";
    }
    void Facilities()
    {
        cout<<endl;
        cout<<"-> Facilities\n";
        cout<<" * Day Care Center\n * Mosques\n * Canteens\n * Banks";
    }

};

// Class For Contact
class Contact
{
    public:
    Contact()
    {
        int keepRunning=1;
        char choice;
        DisplayMenu();
        while(keepRunning!=0)
        {
            cout<<"Enter your choice :";
            cin>>choice;
            if(choice>='0' && choice<='9')
            {
             switch(choice)
             {
                case '1':
                {
                    cout<<"-> Postal Address "<<endl;
                    cout<<"Government College University,\nAllama Iqbal Road,\nFaisalabad, Pakistan"<<endl;
                    DisplayMenu();
                    break;
                }
                case '2':
                {
                    cout<<"-> Information Center "<<endl;
                    cout<<"Phone : +92-41-9200886\nPhone : +92-41-9200066\nEmail: info@gcuf.edu.pk"<<endl;
                    DisplayMenu();
                    break;
                }
                case '3':
                {
                    cout<<"-> Admission Office"<<endl;
                    cout<<"Phone : +92-41-9201380\nPhone : +92-41-9200584\nPhone : +92-41-9200431\nPhone : 041-9200883"<<endl;
                    DisplayMenu();
                    break;
                }
                case '4':
                {
                    cout<<"Successfully! Exit From Contact."<<endl;
                    keepRunning=0;
                    break;
                }
                default:
                {
                    cout<<"Invalid input!\nPlease enter valid input.\n";
                    break;
                }
             }
            }
            else
            {
                cout<<"Invalid Input!\nPlease enter input in the form of number.\n"; 
            }

        }


    }
    void DisplayMenu()
    {
        cout<<endl;
        cout<<"*************************"<<endl; 
        cout<<"*       Contacts        *"<<endl;
        cout<<"*************************"<<endl;
        cout<<"*                       *"<<endl;
        cout<<"* 1. Postal Address     *"<<endl;
        cout<<"* 2. Information Center *"<<endl;
        cout<<"* 3. Admission Office   *"<<endl;
        cout<<"* 4. Exit               *"<<endl;
        cout<<"*                       *"<<endl;
        cout<<"*************************"<<endl;
        cout<<endl;
        
    }
};

// Class For Help/FAQ

class HelpFaq
{
    public:
    HelpFaq()
    {
        int keepRunning=1;
        char choice;
        DisplayMenue();
        while(keepRunning!=0)
        {
            cout<<"Enter your Choice :";
            cin>>choice;
            if(choice>='0' && choice<='9')
            {
                switch (choice)
                {
                    case '1':
                    {
                        GeneralQuestion();
                        DisplayMenue();
                        break;
                    }
                    case '2':
                    {
                        Admissions();
                        DisplayMenue();
                        break;
                    }
                    case '3':
                    {
                        Academic();
                        DisplayMenue();
                        break;
                    }
                    case '4':
                    {
                        FinancialAid();
                        DisplayMenue();
                        break;
                    }
                    case '5':
                    {
                        CampusLife();
                        DisplayMenue();
                        break;
                    }
                    case '6':
                    {
                        ItSupport();
                        DisplayMenue();
                        break;
                    }
                    case '7':
                    {
                        LibraryServices();
                        DisplayMenue();
                        break;

                    }
                    case '8':
                    {
                        Examination();
                        DisplayMenue();
                        break;
                    }
                    case '9':
                    {
                        InternationalStudent();
                        DisplayMenue();
                        break;
                    }
                    case '0':
                    {
                        cout<<"Successfully! Exit From Help/FAQ."<<endl;
                        keepRunning=0;
                        break;
                    }
                    default:
                    {
                        cout<<"Invalid input!\nPlease enter valid input.\n";
                        break;
                    }
                }

            }
            else
            {
                cout<<"Invalid Input!\nPlease enter input in the form of number.\n";
            }

        }


    }
    void DisplayMenue()
    {
        cout<<"*****************************"<<endl;
        cout<<"*        Help / FAQ         *"<<endl;
        cout<<"*****************************"<<endl;
        cout<<"*                           *"<<endl;
        cout<<"* 1. General Question       *"<<endl;
        cout<<"* 2. Admission              *"<<endl;
        cout<<"* 3. Academic               *"<<endl;
        cout<<"* 4. Fees and Financial Aid *"<<endl;
        cout<<"* 5. Campus Life            *"<<endl;
        cout<<"* 6. IT Support             *"<<endl;
        cout<<"* 7. Library Services       *"<<endl;
        cout<<"* 8. Examination            *"<<endl;
        cout<<"* 9. International Students *"<<endl;
        cout<<"* 0. Exit                   *"<<endl;
        cout<<"*                           *"<<endl;
        cout<<"*****************************"<<endl;
        cout<<endl;
        
    }
    void GeneralQuestion()
    {
        cout<<" -> General Question"<<endl;
        cout<<"* What are the university's working hours?\nThe university operates from Monday to Friday, 8:00 AM to 5:00 PM.";
        cout<<"* Where is the university located?\nGovernment College University,\nAllama Iqbal Road,\nFaisalabad Pakistan\n";
        cout<<"* How can I contact the university?\nPhone : +92-41-9200886\nEmail: info@gcuf.edu.pk"<<endl;
        cout<<"* Does the university offer online programs?\nYes, we offer several fully online and hybrid programs.\n";
    }
    void Admissions()
    {
        cout<<" -> Admission Question\n";
        cout<<"* How can I apply for admission?\nVisit Admissions Page and follow the step-by-step application process."<<endl;
        cout<<"* What documents are required for admission?\n . High school transcripts\n . Proof of identity (e.g., passport or ID)\n . Standardized test scores (if applicable)\n . Recommendation letters"<<endl;
        cout<<"* What is the application deadline?\nFall Semester: June 15\nSpring Semester: November 15"<<endl;
        cout<<"* Is there an application fee?\nYes, the non-refundable application fee is 5)0."<<endl;
        cout<<"* Does the university offer scholarships?\nYes, we provide a variety of scholarships based on merit, need, and extracurricular achievements. Visit Scholarship Portal for more information"<<endl;

    }
    void Academic()
    {
        cout<<" -> Academic Questions \n";
        cout<<"* What programs and degrees does the university offer?\nWe offer undergraduate, graduate, and doctoral programs. Explore all programs at university website."<<endl;
        cout<<"* How do I register for classes?\nLog in to your student portal and select 'Course Registration'."<<endl;
        cout<<"* How can I get a copy of my transcripts?\nRequest transcripts through the Student Services Portal.\n";
        cout<<"* What is the grading system?\nOur grading system follows the standard letter grades (A, B, C, D, F) with GPA scales."<<endl;
        cout<<"* Can I transfer credits from another university?\nYes, credit transfers are subject to evaluation. Learn more on the Credit Transfer Policy page."<<endl;

    }
    void FinancialAid()
    {
        cout<<" -> Fees and Financial Aid Questions \n";
        cout<<"* What are the tuition fees for my program?\nTuition varies by program. Visit Fee Structure for details."<<endl;
        cout<<"* What payment methods are accepted?\nCredit/debit cards, online banking, checks, and cash (at the finance office). "<<endl;
        cout<<"* How do I apply for financial aid?\nComplete the FAFSA form (if applicable) and submit it via Financial Aid Portal. "<<endl;
        cout<<"* Are there installment payment plans available?\nYes, students can opt for flexible payment plans. Contact the finance office for details. "<<endl;
        cout<<"* What happens if I miss a payment deadline?\nLate fees may apply, and course registration could be blocked until payments are cleared. "<<endl;

    }
    void CampusLife()
    {
        cout<<" -> Campus Life Questions \n";
        cout<<"* What housing options are available?\nOn-campus dormitories and off-campus housing."<<endl;
        cout<<"* What dining facilities are on campus?\nWe have several dining halls, cafés, and restaurants."<<endl;
        cout<<"* How do I join student organizations?\nBrowse and register for organizations through the Student Activities Portal."<<endl;
        cout<<"* What transportation options are available on campus?\nFree shuttle buses, bicycle racks, and parking lots for students with vehicles."<<endl;
        cout<<"* Is there a gym or fitness center on campus?\nYes, the gym is open to students and staff. View hours and membership details GYM Portal."<<endl;
    }
    void ItSupport()
    {
        cout<<" -> IT Support Questions \n";
        cout<<"*  How do I reset my student portal password?\nClick 'Forgot Password' on the login page and follow the instructions."<<endl;
        cout<<"* What do I do if I can't access Wi-Fi on campus?\nEnsure you're using your university credentials. For further assistance, contact IT support at ithelp@GCUF.edu.pk"<<endl;
        cout<<"* Who do I contact for technical issues?\nEmail: ithelp@universityname.edu\nPhone: +1 (123) 456-7891"<<endl;
       
    }
    void LibraryServices()
    {
        cout<<" -> Library Services Questions \n";
        cout<<"*  What are the library hours?\nMonday to Friday: 8:00 AM to 10:00 PM\nSaturday and Sunday: 10:00 AM to 6:00 PM"<<endl;
        cout<<"* How do I access online resources?\nLog in to the Library Portal using your university ID."<<endl;
        cout<<"* Can I borrow books from the library?\nYes, students can borrow up to 5 books at a time for 2 weeks."<<endl;
        cout<<"* Are there study rooms available?\nYes, study rooms can be reserved online or at the library help desk."<<endl;
        cout<<"* What is the late fee for overdue books?\n100 pkr per day per book."<<endl;
    }
    void Examination()
    {
        cout<<" -> Examination Questions \n";
        cout<<"*  How do I find my exam schedule?\nExam schedules are posted on the Student Portal under 'Examinations.'"<<endl;
        cout<<"* What happens if I miss an exam?\nSubmit a written request for a make-up exam to your department within 3 days."<<endl;
        cout<<"* How can I view my grades?Grades are accessible via the Student Portal."<<endl;
        cout<<"* What is the university's policy on cheating?\nCheating and plagiarism are strictly prohibited and may result in disciplinary action."<<endl;
    }
    void InternationalStudent()
    {
        cout<<" -> International Student Questions \n";
        cout<<"* Does the university assist with student visas?\nYes, we provide documentation and guidance. Contact the international office at international@GCUF.edu.pk"<<endl;
        cout<<"* Are there language requirements for admission?\nYes, proof of English proficiency is required (TOEFL, IELTS, etc.)."<<endl;
        cout<<"* How do I open a bank account in the host country?\nVisit the International Student Guide for detailed steps."<<endl;
        cout<<"* What support services are available for international students?\nDedicated counselors, cultural events, and orientation programs are available."<<endl;
    }
            

};

class Login {
public:
    void loginmenu() {
        int choice;
        int ist_choice;
        // Loop to keep the menu running
        while(true){
            system("cls");

           cout<<"*******************************************************************\n";
           cout<<"*                                                                 *\n";
           cout<<"*                   GCUF STUDENT PORTAL                           *\n";
           cout<<"*                                                                 *\n";
           cout<<"*******************************************************************\n";
           cout<<"\t\n1:Student login \t\t\t2:Faculity Login"<<endl;
           cout<<"\nPlease enter your choice---->:";
           cin>>ist_choice;
           if(ist_choice==2){
            cout<<"*******************************************************************\n";
            cout<<"*                                                                 *\n";
            cout<<"*               Welcome to FACULITY PORTAL                        *\n";
            cout<<"*                                                                 *\n";
            cout<<"*******************************************************************\n"; 
            login();
            facultyOperations();
             //cin.ignore();
                cin.get();
            //loginmenu();
                exit(0);
           }
           else if(ist_choice==1){
             cout << "*******************************************************************\n";
             cout << "*                                                                 *\n";
             cout << "*               Welcome to STUDENT PORTAL                        *\n";
             cout << "*                                                                 *\n";
             cout << "*******************************************************************\n";
             cout << "\n1: LOGIN USER \n2: REGISTER USER \n3: FORGOT ID\n4: EXIT\n";
             cout << "Please enter your choice ---> ";
             cin >> choice;

        if (choice >= 1 && choice <= 4) {
            switch (choice) {
                case 1:
                    login();
                    break;
                case 2:
                    registeration();
                    break;
                case 3:
                    forgot_id();
                    break;
                case 4:
                    cout << "Thank you! Exiting the system...\n";
                    break;
                default:
                    cout << "Invalid choice. Please try again.\n";
                }
            break; 
        } else {
            cout << "Invalid option selected. Please try again.\n"<<endl;
           system("pause");
        }
    } while (true);
}
        }
    
void login() {
        int attempts = 0;
        string userId, userpassword, id, pass;
        while (attempts < 3) {
            system("cls");
            cout << "Please enter username and password (" << (3 - attempts) << " attempts left)\n";
            cout << "Username---->: ";
            cin >> userId;
            cout << "Password---->: ";
            cin >> userpassword;

            ifstream input("records.txt");
            bool isValid = false;

            while (input >> id >> pass) {
                if (id == userId && pass == userpassword) {
                    isValid = true;
                    break;
                }
            }
            input.close();

            if (isValid) {
                system("cls");
                cout << userId << ", you are successfully logged in.\n";
                Welcome welcome;
                welcome.DisplayMenue();
                return;
            } else {
                cout << "Login error: Invalid credentials entered.\n";
                attempts++;
                if (attempts < 3) {
                    cout << "Please try again.\n";
                   
                }
            }
        }

        cout << "Too many failed login attempts\n Your portal is Locked please try Again Later!!"<<endl;
        system("pause");
        loginmenu();
    
}

    void registeration() {
        string ruserid, rpassword, remail,rcnic;
        system("cls");
        cout << "Please enter username: ";
        cin >> ruserid;
        cout << "Please enter password: ";
        cin >> rpassword;
        cout << "Please enter your email address: ";
        cin >> remail;
        cout<<"Please enter your CNIC NO (without-dashes)";
        cin>>rcnic;
        ofstream f1("records.txt", ios::app);
        if (f1.is_open()) {
            f1 << ruserid << " " << rpassword << " " << remail <<" "<<rcnic<<endl;
            f1.close();
            system("pause");
            cout << "Registration successful!\n"; 
            login();
        } else {
            cout << "Error: Unable to open file for writing.\n";
        }
    }

    void forgot_id() {
    int option;
    cout << "If you have forgotten your username or password, you can retrieve it here.\n";
    cout << "1: Search by Username\n";
    cout << "2: Search by Email\n";
    cout << "Enter your choice: ";
    cin >> option;

    if (option == 1) {
        string suserid, sid, spass, semail, scnicno;
        cout << "Please enter your username: ";
        cin >> suserid;

        ifstream f2("records.txt");
        bool found = false;
        while (f2 >> sid >> spass >> semail >> scnicno) {
            if (sid == suserid) {
                found = true;
                cout << "Match found!\n";
                cout << "Your password is: " << spass << endl;
                cout << "Press Enter to exit...";
                cin.ignore(); // To clear the input buffer
                cin.get();    // Pause program

                // Exit the program after displaying the result
                exit(0);  // This exits the program immediately
            }
        }
        f2.close();

        if (!found) {
            cout << "No match found for the provided username.\n";
        }

    } else if (option == 2) {
        string tuseremail, tid, tpass, temail, tcnicno;
        cout << "Please enter your email: ";
        cin >> tuseremail;

        ifstream f3("records.txt");
        bool found = false;
        while (f3 >> tid >> tpass >> temail >> tcnicno) {
            if (temail == tuseremail) {
                found = true;
                cout << "Match found!\n";
                cout << "Your username is: " << tid << endl;
                cout << "Your password is: " << tpass << endl;
                cout << "Press Enter to exit...";
                cin.ignore(); // To clear the input buffer
                cin.get();    // Pause program

                // Exit the program after displaying the result
                exit(0);  // This exits the program immediately
            }
        }
        f3.close();

        if (!found) {
            cout << "No match found for the provided email.\n";
        }
    } else {
        cout << "Invalid option selected. Please try again.\n";
    }

    // Exit the program after the process is done
    exit(0);  // This exits the program immediately
   
//          else if (option == 3) {
//             string tusercnic, tid, tpass, tcnic;
//             cout << "Please enter your CNIC: ";
//             cin >> tusercnic;

//              ifstream f4("records.txt");
//             if (!f4) {
//              cout << "Error: Unable to open the file.\n";
//              return; // Exit the function in case of file error
//             }

//         bool found = false;
//          while (f4 >> tid >> tpass >> tcnic) {
//         if (tcnic == tusercnic) {
//             found = true;
//             cout << "Match found!\n";
//             cout << "Your username is: " << tid << endl;
//             cout << "Your password is: " << tpass << endl;
//             break; // Exit the loop after a match
//         }
//     }

//     f4.close(); // Close the file after processing

//     if (!found) {
//         cout << "No match found for the CNIC No\n";
//     }

//     // Call login menu after completing the CNIC search
//     Login login;
//     login.loginmenu();
// }
    
        //  else {
        //     cout << "Invalid option. Returning to the main menu.\n";
            
        // }
    
 }     
};
// Class For Fill Admission Form
class AdmissionForm
{
    public:
    string name;
    string age;
    string id;
    string contactNo;
    string fatherName;
    string fatherId;
    string fatherContactNo;
    string email;
    string address;
    string course;
    public:
    AdmissionForm()
    {
        char choice;
        int keepRunning=1;
        DisplayMenue();
        while(keepRunning!=0)
        {
            cout<<"Enter selected option :";
            cin>>choice;
            if(choice>='0' & choice<='9')
            {
                switch (choice)
                {
                    case '1':
                    {
                        FillForm();
                        DisplayForm();
                        cout<<"Thank you for applying to GUCF University!"<<endl;
                        cout<<"Our admissions team will review your application and contact you soon.\n"<<endl;
                        DisplayMenue();
                        break;
                    }
                    case '2':
                    {
                        int running=1;
                        string ID;
                        while(running!=0)
                     {
                        int value=0;
                        while(value!=1)
                        {
                           cout<<"Enter Your ID Card or B-Form number (Without dash):";
                           getline(cin,ID);
                           for(char a:ID)
                           {
                             if((a>='0' && a<='9'))
                             {
                                value=1;
                             }
                             else
                             {
                                cout<<"Invalid ID number. Please enter a valid number."<<endl;
                                value=0;
                                break;
                             }
                            }
                        }
                        if(ID==id)
                        {
                            cout<<"Your ID match."<<endl;
                            running=0;
                            DisplayForm();
                            cout<<"\n Status: pending!"<<endl;
                            cout<<"Our admissions team will review your application and contact you soon.\n"<<endl;
                        }
                        else
                        {
                            cout<<"Invalid ID! Your id don't match with our database.\n";
                        }
                     }
                        DisplayMenue();
                        break;
                    }
                    case '3':
                    {
                        cout<<"Successfully! Exit From Admission Portal."<<endl;
                        keepRunning=0;
                        break;
                    }
                    default:
                    {
                        cout<<"Invalid input!\nPlease enter valid input.\n";
                        break;
                    }
                }
            }
            else
            {
                cout<<"Invalid input!\nPlease enter input in Form of number.\n";

            }
        }
    }
    void DisplayMenue()
    {
        cout<<endl<<endl;
        cout<<"*******************************"<<endl;
        cout<<"*     Admission Portal        *"<<endl;
        cout<<"*******************************"<<endl;
        cout<<"*                             *"<<endl;
        cout<<"* 1. Fill Admission Form      *"<<endl;
        cout<<"* 2. View Admission Form      *"<<endl;
        cout<<"* 3. Exit                     *"<<endl;
        cout<<"*                             *"<<endl;
        cout<<"*******************************"<<endl;
    }
    void FillForm()
    {
        int isvalue=0;
        cout<<endl;
        cout<<"Fill Your Admission Form.\n\n";
        //// Input Name
        while(isvalue!=1)
        {
          cout<<"Enter your Full Name :";
          getline(cin,name);
          for(char a:name)
          {
            if((a>='a' && a<='z')||(a>='A' && a<='Z')||(a==' '))
            {
                isvalue=1;
            }
            else
            {
               cout<<"\nInvalid Name. Please enter a valid name."<<endl;
               isvalue=0;
               break;
            }
          }

        }

        // Input Age
        isvalue=0;
        while(isvalue!=1)
        {
          cout<<"Enter Your Age :";
          getline(cin,age);
          for(char a:age)
          {
            if((a>='0' && a<='9'))
            {
                isvalue=1;
            }
            else
            {
               cout<<"\nInvalid Age. Please enter a valid age."<<endl;
               isvalue=0;
               break;
            }
          }

        }

        // Input Father name
        isvalue=0;
        while(isvalue!=1)
        {
          cout<<"Enter Your Father Name:";
          getline(cin,fatherName);
          for(char a:fatherName)
          {
            if((a>='a' && a<='z')||(a>='A' && a<='Z')|| (a==' '))
            {
                isvalue=1;
            }
            else
            {
               cout<<"\nInvalid Name. Please enter a valid name."<<endl;
               isvalue=0;
               break;
            }
          }

        }

        // Input ID Card Number
        isvalue=0;
        while(isvalue!=1)
        {
          cout<<"Enter Your ID Card or B-Form number (Without dash):";
          getline(cin,id);
          for(char a:id)
          {
            if((a>='0' && a<='9'))
            {
                isvalue=1;
            }
            else
            {
               cout<<"\nInvalid ID number. Please enter a valid number."<<endl;
               isvalue=0;
               break;
            }
          }

        }

        // Input Contact Number
        isvalue=0;
        while(isvalue!=1)
        {
          cout<<"Enter Your Contact number (Without dash):";
          getline(cin,contactNo);
          for(char a:contactNo)
          {
            if((a>='0' && a<='9'))
            {
                isvalue=1;
            }
            else
            {
               cout<<endl;
               cout<<"\nInvalid contact number. Please enter a number."<<endl;
               isvalue=0;
               break;
            }
          }

        }

        // Input Father ID  Number
        isvalue=0;
        while(isvalue!=1)
        {
          cout<<"Enter Your Father ID number (Without dash):";
          getline(cin,fatherId);
          for(char a:fatherId)
          {
            if((a>='0' && a<='9'))
            {
                isvalue=1;
            }
            else
            {
               cout<<"Invalid ID number. Please enter a number."<<endl;
               isvalue=0;
               break;
            }
          }

        }

        // Input Father contact Number
        isvalue=0;
        while(isvalue!=1)
        {
          cout<<"Enter Your Father contact number (Without dash):";
          getline(cin,fatherContactNo);
          for(char a:fatherContactNo)
          {
            if((a>='0' && a<='9'))
            {
                isvalue=1;
            }
            else
            {
               cout<<"Invalid contact number. Please enter a number."<<endl;
               isvalue=0;
               break;
            }
          }

        }

        // Input Email Address
        isvalue=0;
        int atTheRate=0;
        int dot=0;
        while(isvalue!=1)
        {
          cout<<"Enter Your Email Address (Without dash):";
          getline(cin,email);
          for(char a:email)
          {
            if((a=='@'))
            {
                atTheRate++;
            }
            if(a=='.')
            {
                dot++;
            }
           
           }
           if(atTheRate==1 && dot==1)
           {
              isvalue=1;
           }
           else
           {
              cout<<"Invalid Email. Please enter a Valid email Address."<<endl;
              isvalue=0;
           }

        }

        // Input Address
        cout<<"Enter your Postal Address: ";
        getline(cin,address);

        // Input course
        cout<<"Enter your Course : ";
        getline(cin,course);
        cout<<endl;
        cout<<"*********************************************"<<endl;
        cout<<"*        FORM SUBMISSION SUCCESSFUL         *"<<endl;
        cout<<"*********************************************"<<endl;
        
    }
    void DisplayForm()
    {
       // Dspaying Collected Dat
       cout<<endl;
       cout<<"Here are the details you provided:\n"<<endl;
       cout<<"Full Name             :"<<name<<endl;
       cout<<"ID Number             :"<<id<<endl;
       cout<<"Contact Number        :"<<contactNo<<endl;
       cout<<"Father Name           :"<<fatherName << endl;
       cout<<"Father ID Number      :"<<fatherId<<endl;
       cout<<"Father Contact Number :"<<contactNo<<endl;
       cout<<"Your Age              :"<<age << endl;
       cout<<"Email Address         :"<<email<<endl;
       cout<<"Applied Program       :"<<course<<endl;
       cout<<"Address               :"<<address<<endl;
       cout<<endl;
    }

};
// Class Faculty
class Faculty
{
    public:
    Faculty()
    {
        int keepRunning=1;
        char choice;
        DisplayMenue();
        while(keepRunning!=0)
        {
            cout<<"Enter your Choice :";
            cin>>choice;
            if(choice>='0' && choice<='9')
            {
                switch (choice)
                {
                    case '1':
                    {
                        ComputerAndIt();
                        DisplayMenue();
                        break;
                    }
                    case '2':
                    {
                        Law();
                        DisplayMenue();
                        break;
                    }
                    case '3':
                    {
                        ArtsAndHumanities();
                        DisplayMenue();
                        break;
                    }
                    case '4':
                    {
                        Science();
                        DisplayMenue();
                        break;
                    }
                    case '5':
                    {
                        EngineeringAndTechnology();
                        DisplayMenue();
                        break;
                    }
                    case '6':
                    {
                        BusinessAndManagement();
                        DisplayMenue();
                        break;
                    }
                    case '7':
                    {
                        SocialScience();
                        DisplayMenue();
                        break;
                    }
                    case '8':
                    {
                        HealthAndMedicine();
                        DisplayMenue();
                        break;
                    }
                    case '9':
                    {
                        IslamicStudies();
                        DisplayMenue();
                        break;
                    }

                    case '0':
                    {
                        cout<<"Successfully! Exit from Faculty."<<endl;
                        keepRunning=0;
                        break;
                    }
                    default:
                    {
                        cout<<"Invalid input!\nPlease enter valid input.\n";
                        break;
                    }

                }
            }
            else
            {
                cout<<"Invalid input!\nPlease enter input in form of number.\n";
            }
        }

    };
    void DisplayMenue()
    {
        cout<<"*********************************"<<endl;
        cout<<"*         Faculty               *"<<endl;
        cout<<"*********************************"<<endl;
        cout<<"*                               *"<<endl;
        cout<<"* 1. Computer and IT            *"<<endl;
        cout<<"* 2. Law                        *"<<endl;
        cout<<"* 3. Arts and Humanities        *"<<endl;
        cout<<"* 4. Science                    *"<<endl;
        cout<<"* 5. Engineering and Technology *"<<endl;
        cout<<"* 6. Business and Management    *"<<endl;
        cout<<"* 7. Social Sciences            *"<<endl;
        cout<<"* 8. Health and Medicine        *"<<endl;
        cout<<"* 9. Islamic Studies            *"<<endl;
        cout<<"* 0. Exit                       *"<<endl;
        cout<<"*                               *"<<endl;
        cout<<"*********************************"<<endl;
        cout<<endl;
    }
    void ArtsAndHumanities()
    {
        cout<<" -> Arts and Humanities Department"<<endl;
        cout<<"* Programs offer :\n"<<endl;
        cout<<"  . English Literature "<<endl;
        cout<<"  . History"<<endl;
        cout<<"  . Philosophy "<<endl;
        cout<<"  . Fine Arts "<<endl;
        cout<<"  . Linguistics"<<endl;
        cout<<"  . Religious Studies "<<endl;
        cout<<"  . Media and Communication "<<endl;

    }
    void Law()
    {
        cout<<" -> Law Department"<<endl;
        cout<<"* Programs offer :\n"<<endl;
        cout<<"  . LLB (Bachelor of Laws) "<<endl;
        cout<<"  . LLM (Master of Laws)"<<endl;
        cout<<"  . International Law "<<endl;
        cout<<"  . Corporate Law "<<endl;
       
    }
    void EngineeringAndTechnology()
    {
        cout<<" -> Engineering and Technology Department"<<endl;
        cout<<"* Programs offer :\n"<<endl;
        cout<<"  . Civil Engineering "<<endl;
        cout<<"  . Mechanical Engineering"<<endl;
        cout<<"  . Electrical Engineering"<<endl;
        cout<<"  . Software Engineering "<<endl;
        cout<<"  . Computer Science  "<<endl;
    }
    void ComputerAndIt()
    {
        cout<<" -> Computer and IT Department"<<endl;
        cout<<"* Programs offer :\n"<<endl;
        cout<<"  . Computer Science (BSCS) "<<endl;
        cout<<"  . Information Technology (BSIT)"<<endl;
        cout<<"  . Artificial Intelligence (AI) "<<endl;
        cout<<"  . Cybersecurity "<<endl;
        cout<<"  . Game Development "<<endl;
       
    }
    void Science()
    {
        cout<<" -> Science Department"<<endl;
        cout<<"* Programs offer :\n"<<endl;
        cout<<"  . Physics "<<endl;
        cout<<"  . Chemistry"<<endl;
        cout<<"  . Biology "<<endl;
        cout<<"  . Mathematics "<<endl;
        cout<<"  . Statistics "<<endl;
        cout<<"  . Environmental Science "<<endl;
        cout<<"  . Geology "<<endl;
        
    }
    void BusinessAndManagement()
    {
        cout<<" -> Business and Management Department"<<endl;
        cout<<"* Programs offer :\n"<<endl;
        cout<<"  . Business Administration (BBA, MBA)"<<endl;
        cout<<"  . Finance"<<endl;
        cout<<"  . Marketing"<<endl;
        cout<<"  . Human Resource Management (HRM)"<<endl;
        cout<<"  . Supply Chain Management"<<endl;
        cout<<"  . Economics"<<endl;  
    
    }
    void SocialScience()
    {
        cout<<" -> Social Sciences Department"<<endl;
        cout<<"* Programs offer :\n"<<endl;
        cout<<"  . Sociology"<<endl;
        cout<<"  . Political Science"<<endl;
        cout<<"  . International Relations (IR)"<<endl;
        cout<<"  . Psychology"<<endl;
        cout<<"  . Anthropology"<<endl;
        cout<<"  . Criminology"<<endl;
        
    }
    void HealthAndMedicine()
    {
        cout<<" -> Health and Medicine Department"<<endl;
        cout<<"* Programs offer :\n"<<endl;
        
        cout<<"  . Medicine (MBBS, MD)"<<endl;
        cout<<"  . Dentistry"<<endl;
        cout<<"  . Pharmacy"<<endl;
        cout<<"  . Nursing"<<endl;
        cout<<"  . Public Health"<<endl;
        cout<<"  . Biomedical Sciences"<<endl;    

    }
    void IslamicStudies()
    {
        cout<<" -> Islamic Studies Department"<<endl;
        cout<<"* Programs offer :\n"<<endl;
        cout<<"  . Islamic Theology"<<endl;
        cout<<"  . Islamic Law"<<endl;
        cout<<"  . Quranic Studies"<<endl;
        cout<<"  . Comparative Religion"<<endl;
              
    }
   

};

int main()
{
    Welcome welcome;
    Login password;
   password.loginmenu();
    char choice;
        cout<<"\nEnter the number of your choice _:";
        cin>>choice;
        if(choice>='0' && choice<='9')
      {
        switch (choice)
        {
            case '1':
            {
              // About us
              AboutUs about;
              welcome.DisplayMenue();
              break;
            }
            case '2':
            {
                // Contacts
                Contact contact;
                welcome.DisplayMenue();
                break;
            }
            case '3':
            {
              // Help/Faq
              HelpFaq helpFaq;
              welcome.DisplayMenue();
              break;
            }

            case '4':
            {
                // Admission
                AdmissionForm admission;
                welcome.DisplayMenue();
                break;
            }

            case '5':
            {
                //Faculty
                Faculty faculty;
                welcome.DisplayMenue();
                break;
            }
            case '6':
            {
                // offices

                break;
            }
   

            case '8':
            {
              // Exit
              cout<<"You are successfully Exit from GC University Management System.\n";
              welcome.DisplayMenue();
              break;
            }

            default:
            {
                cout<<"Invalid input!\nPlease enter a valid option number.\n";
            }
        }
      }
     else
      {
        cout<<"\nInvalid input!\nPlease enter a choice in form of number.\n";

     }
}

