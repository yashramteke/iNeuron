/*Q9. A company has following details of their employees in the file 'emp.dat'
a. Emp Id
b. Emp Name
c. Emp Address
d. Emp Dept (Admin/Sales/Production/IT)
e. Emp Phone
f. Emp Age
Write a C++ program to read the above file. Create a new file such as Adm.dat,
Sal.dat, Pro.dat, IT.dat respectively to store the employee details according to their
department.*/

#include <iostream>
#include <fstream>
#include <string.h>
#include <cstdlib>
#include <conio.h>
#include <cstdio>
#include <limits>

using namespace std;

int options(int);
void printSpecific(void);

class Employee
{
  private:
      string id, name, add, dept, phone, age, space;

  public:
      string const EMPpath = "emp.dat";
      string const ADMpath = "Adm.dat";
      string const SALpath = "Sal.dat";
      string const PROpath = "Pro.dat";
      string const ITpath = "IT.dat";

      int checkFile(string const filepath)
      {
          ifstream fin;
          ofstream fout;

          fin.open(filepath, ios::in);

          if(fin) // checking, file is created or not. if already created then return 1
          {
              fin.close();
              return 1;
          }
          else
          {
              fout.open(filepath, ios::out); // if file is not created then create new file.
              fout.close();
              return 0;
          }
      }
      void updateData(string filepath)//this function is use for empUpdateData. for upadint existing user
      {
          cin.clear();
          cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

          ofstream fout;
          ifstream fin;

          fout.open(filepath, ios::app);
          fin.seekg(0, ios::end);

          cout<<"Emp Id: ";
          getline(cin, id);
          fout<<"Emp Id: "<<id<<endl;

          cout<<"Emp Name: ";
          getline(cin, name);
          fout<<"Emp Name: "<<name<<endl;

          cout<<"Emp Age: ";
          getline(cin, age);
          fout<<"Emp Address: "<<age<<endl;

          cout<<"Emp Department: ";
          getline(cin, dept);
          fout<<"Emp Department: "<<dept<<endl;

          cout<<"Emp Phone: ";
          getline(cin, phone);
          fout<<"Emp Phone: "<<phone<<endl;

          cout<<"Emp Address: ";
          getline(cin, add);
          fout<<"Emp Age: "<<add<<endl;

          fout<<"--------------------------------"<<endl;

          fin.close();
          fout.close();
      }

      void sortData(string filepath)//function for sorting data
      {
          ifstream fin;
          ofstream fout;

          fout.open(filepath, ios::app); //file open in append mode
          fin.seekg(0, ios::end); // move cursor at the end of file

          fout<<id<<endl;
          fout<<name<<endl;
          fout<<age<<endl;
          fout<<dept<<endl;
          fout<<phone<<endl;
          fout<<add<<endl;
          fout<<"--------------------------------"<<endl;

          fout.close();
          fin.close();
      }
      void print(string const filepath)//display emp data
      {
          string line;
          ifstream fin;

          if(checkFile(filepath))
          {
              fin.open(filepath, ios::in); // file open in read mode

              while(getline(fin, line))
              {
                  cout<<line<<endl;
              }
              fin.close();
          }
          else
          {
              cout<<"Emp File Is Empty. Enter Data To This File Before Print Operation."<<endl;
              fin.close();
          }
      }
      void sortEmpData(string const filepath)//sorting emp data
      {
          ifstream fin;

          try
          {
               if(checkFile(EMPpath) == 0) // checking emp file is exist or not. if exist the else block execute. if not the throw error;
               {
                   throw string("Emp File Is Empty. Nothing To Sort");
               }
               else
               {
                   //creating char array for deleting all these old file
                    char admpath[] = "Adm.dat";
                    char salpath[] = "Sal.dat";
                    char propath[] = "Pro.dat";
                    char itpath[] = "IT.dat";

                   remove(admpath);
                   remove(salpath);
                   remove(propath);
                   remove(itpath);

                   checkFile(ADMpath);
                   checkFile(SALpath);
                   checkFile(ITpath);
                   checkFile(PROpath);

                   int i = totalData(filepath)/7; // checking data is written or not in emp file. if written then how many entries are there and else block execute. if not then if block execute.

                   if(i == 0)
                   {
                       cout<<"EMP file is empty. No Data Found.";
                   }
                   else
                   {
                       fin.open(filepath, ios::in); // file open in read mode

                       for(; i; i--)
                       {
                           getline(fin, id);
                           getline(fin, name);
                           getline(fin, age);
                           getline(fin, dept);
                           getline(fin, phone);
                           getline(fin, add);
                           getline(fin, space);

                           if(dept == "Emp Department: Admin")
                           {
                               sortData(ADMpath);
                               continue;
                           }
                           else if(dept == "Emp Department: Sales")
                           {
                               sortData(SALpath);
                               continue;
                           }
                           else if(dept == "Emp Department: IT")
                           {
                               sortData(ITpath);
                               continue;
                           }
                           else if(dept == "Emp Department: Production")
                           {
                               sortData(PROpath);
                               continue;
                           }
                           else
                           {
                               //other department category not allow. only admin, sales, it and production is allow.
                           }
                       }
                       fin.close();
                       cout<<endl<<"Data Sort Successfuly"<<endl;
                   }
              }
          }
          catch(string& err)
          {
              cout<<err;
          }

      }
      int totalData(string const filepath)
      {
          ifstream fin;
          fin.open(filepath, ios::in); // file open in read mode

          int total_data = 0;
          string line;

          while(!fin.eof())// finds how many data are present in emp file.
          {
              getline(fin, line);
              total_data = total_data + 1;
          }

          fin.close();

          return total_data;
      }
      void updateEmpData(int ch)
      {
          ifstream fin;
          ofstream fout;
          int i = 0;

          if(ch == 1)// update existing data
          {
              try
              {
                  if(checkFile(EMPpath))// checking if file is exist or not. if file is not exits then else block execute.
                  {
                      string s1 = "Emp Id: ";
                      string ID;

                      i = totalData(EMPpath)/7;

                      if(i == 0) // checking file is empty or not
                      {
                          cout<<"Emp File Is Empty."<<endl;
                      }
                      else
                      {
                          cout<<"Enter ID To Update Existing Employee Data >>> ";
                          cin>>ID;

                          ifstream ffin;
                          ffin.open(EMPpath, ios::in);

                          for(; i; i--)// get employee data from file
                          {
                              getline(ffin, id);
                              getline(ffin, name);
                              getline(ffin, age);
                              getline(ffin, dept);
                              getline(ffin, phone);
                              getline(ffin, add);
                              getline(ffin, space);

                              if( (s1 + ID) == id) // condition for matching employee id
                              {
                                  updateData("tmp.dat"); // if id match then update existing employee
                              }
                              else
                              {
                                  sortData("tmp.dat"); // if id not match then copy data from emp.dat to tmp.dat
                              }
                          }
                          ffin.close();
                      }
                    }
                    else
                    {
                        throw string("Emp File Is Empty");
                    }
                  }
                  catch(string& err)
                  {
                      cout<<err;
                  }
              }
              if( (ch == 1 && i != 0) || ch == 4)
              {
                  string line;
                  char emppath[] = "emp.dat";
                  remove(emppath); // before perform this program or this operation please close all program related file(emp.dat, sal.dat, it.dat, pro.dat, adm.dat)
                  // delete emp.dat file because all data copy from emp.dat to tmp.dat

                  fin.open("tmp.dat", ios::in);
                  fout.open(EMPpath, ios::app); //create new emp.dat file

                  while(getline(fin, line))//data copy from tmp.dat to emp.dat
                  {
                      fout<<line<<endl;
                  }
                  fin.close();
                  fout.close();

                  char tmppath[] = "tmp.dat";
                  remove(tmppath); //tmp.dat file delete because all data copy from tmp.dat to emp.dat

                  //creating char array for deleting all these old file
                  char admpath[] = "Adm.dat";
                  char salpath[] = "Sal.dat";
                  char propath[] = "Pro.dat";
                  char itpath[] = "IT.dat";

                  remove(admpath);
                  remove(salpath);
                  remove(propath);
                  remove(itpath);

                  sortEmpData(EMPpath);//after updating employee data, we have to sort employee data for updation in other files
                  cout<<"Data Update Successfully"<<endl;
              }
              if(ch == 2)
              {
                  updateData(EMPpath);
                  sortEmpData(EMPpath);
                  cout<<"New Data Update Successfully"<<endl;
              }
      }
      void deleteEmpData(string const filepath)
      {
          try
          {
              if(checkFile(EMPpath))// checking if file is exist or not. if file is not exits then else block execute.
              {
                  string s1 = "Emp Id: ";
                  string ID;

                  int i = totalData(EMPpath)/7;

                  if(i == 0) // checking file is empty or not
                  {
                      cout<<"Emp File Is Empty."<<endl;
                  }
                  else
                  {
                      cout<<"Enter ID To Delete Employee Data >>> ";
                      cin>>ID;

                      ifstream ffin;
                      ffin.open(EMPpath, ios::in);

                      for(; i; i--)// get employee data from file
                      {
                          getline(ffin, id);
                          getline(ffin, name);
                          getline(ffin, age);
                          getline(ffin, dept);
                          getline(ffin, phone);
                          getline(ffin, add);
                          getline(ffin, space);

                          if( (s1 + ID) == id )
                          {
                              cout<<id<<endl;
                              cout<<name<<endl;
                              cout<<age<<endl;
                              cout<<dept<<endl;
                              cout<<phone<<endl;
                              cout<<add<<endl;
                              cout<<space<<endl<<endl;

                              cout<<"Data Found....Press Enter To Delete...."<<endl;
                              getch();
                          }
                          else
                          {
                              sortData("tmp.dat");
                          }
                      }
                      ffin.close();
                      updateEmpData(4);
                  }
              }
              else
              {
                  throw string("Emp File Is Empty");
              }
          }
          catch(string& err)
          {
              cout<<err;
          }
      }
};

int main()
{
    Employee e;

    int choice = 0;

    system("cls");

    do{
        cout<<"1. Print Data"<<endl;
        cout<<"2. Sort Data"<<endl;
        cout<<"3. Update Data"<<endl;
        cout<<"4. Delete Data"<<endl;
        cout<<"5. Exit"<<endl<<endl;

        cout<<"Enter Your Choice >>> ";
        cin>>choice;

        system("cls");

    }while(!(options(choice) && choice == 5));
}

int options(int choice)//in this function there is a switch case for program execution. this function is non-member function of Employee class.
{
    switch(choice)
    {
    case 1:
        {
            int ch;
            Employee e;

            cout<<"1. Print All Employee Data"<<endl;
            cout<<"2. Print Specific Employee Data"<<endl<<endl;

            cout<<"Enter Your Choice >> ";
            cin>>ch;

            if(ch == 1)
            {
                system("cls");
                e.print(e.EMPpath);
            }
            else
            {
                printSpecific();
            }

            getch();
            system("cls");
            break;
        }
    case 2:
        {
            Employee e;
            e.sortEmpData(e.EMPpath);

            getch();
            system("cls");
            break;
        }
    case 3:
        {
            system("cls");

            Employee e;
            int ch = 0;

            cout<<"1. Update Existing Data"<<endl;
            cout<<"2. Enter New Data"<<endl<<endl;

            cout<<"Enter Choice >>> ";
            cin>>ch;

            if(ch == 1)
            {
                e.updateEmpData(1);
                getch();
                system("cls");
            }
            else if(ch == 2)
            {
                e.updateEmpData(2);
                getch();
                system("cls");
            }
            else
            {
                cout<<"Wrong Choice";
            }

            getch();
            system("cls");
            break;
        }
    case 4:
        {
            system("cls");
            Employee e;

            e.deleteEmpData(e.EMPpath);

            cout<<"Data Delete Successfully";
            system("cls");
            getch();
            break;
        }
    }
    return 1;
}

void printSpecific()// this function is a part of switch case 1.
{
    Employee e;

    system("cls");
    int ch = 0;

    cout<<"1. Print Admin Department Data"<<endl;
    cout<<"2. Print Sales Department Data"<<endl;
    cout<<"3. Print Production Department Data"<<endl;
    cout<<"4. Print IT Department Data"<<endl<<endl;

    cout<<"Enter Your Choice >>> ";
    cin>>ch;

    system("cls");

    switch(ch)
    {
    case 1:
        {
            e.print(e.ADMpath);
            break;
        }
    case 2:
        {
            e.print(e.SALpath);
            break;
        }
    case 3:
        {
            e.print(e.PROpath);
            break;
        }
    case 4:
        {
            e.print(e.ITpath);
            break;
        }
    default:
        {
            cout<<"Wrong Choice";
            break;
        }
    }

    getch();
    system("cls");
}
