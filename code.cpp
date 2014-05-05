#include <fstream.h>
#include <stdio.h>
#include <ctype.h>
#include <dos.h>
#include <iostream.h>
#include <conio.h>
#include <iomanip.h>
#include <string.h>
#include <stdlib.h>
char j[80], q[] = { 'a' };
char    wer[] = "C:\\JG MSG\\login\\";
struct weather
{
    int     wind, relhum, vis, temp;
    char    city[20];
};
struct cont
{
    char    uname[100], name[100];
};
struct calen
{
    int d, m, y;
};
struct subs
{
    char    from[8], subject[80];
    calen   cal;
};
struct use
{
    char    name[8];
};
struct logid
{
    char    a;
};
struct info
{
    char    fname[20], mname[20], sname[20], username[25], pass1[7], pass2[7], id[2];
};

/*
 =======================================================================================================================
 =======================================================================================================================
 */
void processing()
{
    /*~~~~~~~~~~~~~~~~*/
    int cnt = 0, i = 11;
    /*~~~~~~~~~~~~~~~~*/

    do
    {
        {
            clrscr();
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\tProcessing... Please Wait...\n\n";
            cout << setw(i) << "===";
            delay(20);
            if(i <= 77)
                i += 4;
            else
                i = 0;
            cnt += 1;
        }

        while(cnt <= 50);
    } }

/*
 =======================================================================================================================
 =======================================================================================================================
 */
void blinker(char name[], int a, int b)
{
    /*~~~~~~~~~~*/
    int count = 0;
    /*~~~~~~~~~~*/

    do
    {
        {
            clrscr();
            gotoxy(a, b);
            cout << name << " !";
            delay(950);
            clrscr();
            gotoxy(a, b);
            cout << name;
            count += 1;
            delay(950);
        }

        while(count <= 1);
    } }

/*
 =======================================================================================================================
 =======================================================================================================================
 */
void slowprin()
{
    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
    int         len;
    ifstream    fin45("C:\\JG MSG\\settings\\conintro.txt");
    char        intro[80];
    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

    cout << "\n\n";
    while(fin45.getline(intro, 80))
    {
        len = strlen(intro);
        for(int i = 0; i < len; i += 1)
        {
            cout << intro[i];
            delay(10);
        }

        cout << "\n";
    }

    fin45.close();
}

/*
 =======================================================================================================================
 =======================================================================================================================
 */
void startup(char name[])
{
    /*~~~~~~~~~~~~*/
    char    ch = 97;
    /*~~~~~~~~~~~~*/

    strcpy(name, "Welcome To Contact Manager");

    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
    int l = (80 - (strlen(name))) / 2;
    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

    for(int i = 0; i < l; i += 1)
    {
        clrscr();
        gotoxy(i, 3);
        puts(name);
        delay(50);
    }

    clrscr();
    gotoxy(l, 3);
    for(i = 0; i < strlen(name); i += 1)
    {
        for(int j = 0; j < 27; j += 1)
        {
            cout << ch++ << "\b";
            delay(5);
        }

        ch = 97;
        cout << name[i];
    }

    clrscr();
    blinker(name, l, 3);
    cout << "\n";
}

/*
 =======================================================================================================================
 =======================================================================================================================
 */
void contacts(char uname[])
{
    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
    int     choice;
    char    name[] = "Welcome to Contact Manager";
    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

    startup(name);
    slowprin();

    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
    /* source program slide.cpp in my programs folder */
    int     i, j;
    char    p[] = " 1. Yes. Ok. Proceed";
    char    s[] = " 2. No. I'll Do it later.";
    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

    for(i = 0, j = 62; i <= 26; i += 1, j -= 1)
    {
        {
            clrscr();
            {
                /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
                int len;
                int l = (80 - (strlen(name))) / 2;
                /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

                gotoxy(l, 3);
                cout << name << "\n\n\n";

                /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
                ifstream    fin45("C:\\JG MSG\\settings\\conintro.txt");
                char        intro[80];
                /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

                while(fin45.getline(intro, 80))
                {
                    len = strlen(intro);
                    for(int i = 0; i < len; i += 1)
                    {
                        cout << intro[i];
                    }

                    cout << "\n";
                }

                fin45.close();
            }

            gotoxy(i, 12);
            puts(p);
            gotoxy(j, 14);
            puts(s);
            delay(25);
        }
    }

    delay(2000);
    cout << "\n\n\n\t\t\t Enter your choice : ";
    cin >> choice;
    if(choice == 2) return;
    for(; i >= 0 && j <= 62; i -= 1, j += 1)
    {
        {
            clrscr();
            {
                /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
                int len;
                int l = (80 - (strlen(name))) / 2;
                /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

                gotoxy(l, 3);
                cout << name << "\n\n\n";

                /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
                ifstream    fin45("C:\\JG MSG\\settings\\conintro.txt");
                char        intro[80];
                /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

                while(fin45.getline(intro, 80))
                {
                    len = strlen(intro);
                    for(int i = 0; i < len; i += 1)
                    {
                        cout << intro[i];
                    }

                    cout << "\n";
                }

                fin45.close();
            }

            gotoxy(i, 12);
            puts(p);
            gotoxy(j, 14);
            puts(s);
            delay(25);
        }
    }

    clrscr();

    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
    int l = (80 - (strlen(name))) / 2;
    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

    gotoxy(l, 3);
    cout << name;

    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
    ifstream    fin56("C:\\JG MSG\\login\\list.use", ios::binary);
    char        username[20][80], names[20][80];
    int         k = 0;
    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
    {
        /*~~*/
        use A;
        /*~~*/

        while(fin56.read((char *) &A, sizeof(A)))
        {
            strcpy(username[k++], A.name);
        }
    }

    fin56.close();

    /*~~~~~~~~~~~*/
    info    X;
    int     ch = 1;
    int     v = 0;
    /*~~~~~~~~~~~*/

    i = 0;
    cout << "\n\nView all available contacts now...";
    cout << "\n\n\n";
    while(v < k)
    {
        {
            /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
            char    add[] = "C:\\JG MSG\\login\\";
            /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

            strcat(add, username[v]);
            strcat(add, ".jgs");

            /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
            ifstream    fin57(add, ios::binary);
            /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

            fin57.read((char *) &X, sizeof(X));
            strcpy(names[v++], X.fname);
            cout << " " << ch << ". ";
            puts(X.fname);
            ch += 1;
        }
    }

    /*~~~~~~~~~~~~~~~~~~~~~~*/
    int     selec[20], d = -1;
    char    cho;
    /*~~~~~~~~~~~~~~~~~~~~~~*/

    cout << "\n\nChoose your contacts !!! ";
    getch();
    for(i = 0; i < k; i += 1)
    {
        {
            clrscr();
            l = (80 - (strlen(name))) / 2;
            gotoxy(l, 3);
            puts(name);
            cout << "\n\n\n";
            v = 0;
            ch = 1;

            /*~~~~~~~~~~~~~~*/
            char    nmew1[80];
            /*~~~~~~~~~~~~~~*/
            {
                cout << "\n\nAll the available contacts...";
                for(int x = 0; x < k; x += 1)
                {
                    {
                        /*~~~~~~~~~*/
                        int flag = 0;
                        /*~~~~~~~~~*/

                        strcpy(nmew1, names[x]);
                        for(int j = 0; j < k; j += 1)
                        {
                            if(strcmpi(names[selec[j]], names[x]) == 0)
                            {
                                flag = 1;
                                break;
                            }
                        }

                        if(flag == 1)
                        {
                            /*~~~~~~*/
                            int y = 0;
                            /*~~~~~~*/

                            for(; y < strlen(nmew1); y += 1) nmew1[y] = toupper(nmew1[y]);
                        }

                        cout << "\n " << x + 1 << ". " << nmew1;
                    }
                }
            }

            cout << "\n\n Choose Contact No." << i + 1 << " ? (Y/N) : ";
            cin >> cho;
            if(cho == 'y' || cho == 'Y')
            {
                d += 1;
                selec[d] = i;
            }
        }
    }

    strcat(wer, uname);
    strcat(wer, ".jgs");

    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
    info        D;
    ifstream    filein(wer, ios::binary);
    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

    filein.read((char *) &D, sizeof(D));
    filein.close();
    strcpy(wer, "C:\\JG MSG\\USERS\\user");
    strcat(wer, D.id);
    strcat(wer, "\\contacts.con");

    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
    ofstream    fileout(wer, ios::binary);
    cont        AB;
    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

    for(i = 0; i < d + 1; i += 1)
    {
        {
            strcpy(AB.uname, username[selec[i]]);
            strcpy(AB.name, names[selec[i]]);
            fileout.write((char *) &AB, sizeof(AB));
        }
    }

    fileout.close();
    getch();
    cout << "\n\n Contact Updation Successful !";
}

/*
 =======================================================================================================================
 =======================================================================================================================
 */
void slowprin(char intro[])
{
    /*~~~~~~~~~~~~~~~~~~~~*/
    int len = strlen(intro);
    /*~~~~~~~~~~~~~~~~~~~~*/

    for(int i = 0; i < len; i += 1)
    {
        cout << intro[i];
        delay(10);
        if(i == 74 || i == 146) cout << "\n ";
    }
}

/*
 =======================================================================================================================
 =======================================================================================================================
 */
void res(int a)
{
    /*~~~~~~~~~~~~~~~~~~~~~~~~~*/
    int     k = 0;
    char    status[10], sles[80];
    /*~~~~~~~~~~~~~~~~~~~~~~~~~*/

    if(a != 1)
    {
        strcpy(sles, "Server Link Establishment Successful");
        strcpy(status, "Successful");
    }
    else
    {
        strcpy(sles, "Server Link Establishment Failure");
        strcpy(status, "Failure");
    }

    for(int i = 0; i <= 11; i += 1)
    {
        clrscr();
        gotoxy(5, k);
        cout << "\t\t\tAccessing James Gleick Servers";
        delay(50);
        k += 1;
    }

    /*~~~~~~~~*/
    int cnt = 0;
    /*~~~~~~~~*/

    do
    {
        {
            clrscr();
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\tAccessing James Gleick Servers\n\n";
            cout << setw(i) << "===";
            delay(20);
            if(i <= 77)
                i += 4;
            else
                i = 0;
            cnt += 1;
        }

        while(cnt <= 50);
    } cnt = 0;
    do
    {
        {
            clrscr();
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t Server Link Establishment " << status << " ! ";
            delay(500);
            clrscr();
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t Server Link Establishment " << status;
            delay(500);
            cnt += 1;
        }

        while(cnt < 2);
    } /*~~~~~~~~~~~~~~~~~~~~~*/ int slesl = strlen(sles);
    /*~~~~~~~~~~~~~~~~~~~~~*/

    for(i = 0; i < slesl; i += 1)
    {
        clrscr();
        gotoxy(5, 13);
        for(int j = i; j < slesl; j += 1) cout << sles[j];
        delay(50);
    }
}

/*
 =======================================================================================================================
 =======================================================================================================================
 */
void enpass(char upass[], int n = 5)
{
    /*~~~~~~*/
    char    t;
    /*~~~~~~*/

    cout << "\nEnter your 5 digit password : ";
    for(int i = 0; i < n; i += 1)
    {
        t = getch();
        upass[i] = t;
        cout << "*";
    }

    upass[n] = '\0';
}

char    add[] = "C:\\JG MSG\\login\\";

/*
 =======================================================================================================================
 =======================================================================================================================
 */
void lines()
{
    cout << "\n ";
    for(int a = 1; a < 78; a += 1)
    {
        cout << "-";
        delay(20);
    }
}

/*
 =======================================================================================================================
 =======================================================================================================================
 */
void viewmsg(char path[], char sub[])
{
    clrscr();
    cout << "\n\t\t\tJames Gleick's Messenger";
    cout << "\n\t\t\t~~~~~ ~~~~~~~~ ~~~~~~~~\n\n";
    cout << "\n\n\t\t\t" << sub;
    cout << "\n\nMessage : ";
    cout << "\n\t";

    /*~~~~~~~~~~~~~~~~~~*/
    ifstream    fin(path);
    /*~~~~~~~~~~~~~~~~~~*/

    if(!fin)
    {
        {
            cout << "Sorry. File corrupted or deleted. Refer PC Settings";
            cout << "\n\n Press Any key !";
            getch();
            return;
        }
    }
    else
    {
        {
            /*~~~~~~~~~~~~*/
            char    msg[80];
            /*~~~~~~~~~~~~*/

            while(fin.getline(msg, 80))
            {
                cout << msg;
                cout << "\n\t";
            }

            cout << "\n Fine !!??";
            getch();
        }
    }

    fin.close();
}

char    path[] = "C:\\JG MSG\\USERS\\user";

/*
 =======================================================================================================================
 =======================================================================================================================
 */
void mailcheck(char uname[])
{
ini:
    clrscr();
    cout << "\n\t\t\tJames Gleick's Messenger";
    cout << "\n\t\t\t~~~~~ ~~~~~~~~ ~~~~~~~~\n\n";
    cout << "\t\t\t Your Mail History";
    cout << "\n\t\t\t ~~~~ ~~~~ ~~~~~~~";
    for(int i = 0; i < strlen(uname); i += 1) uname[i] = tolower(uname[i]);

    /* process of making the file address */
    strcpy(add, "C:\\JG MSG\\login\\");
    strcat(add, uname);
    strcat(add, ".jgs");

    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
    info        X;
    ifstream    fi(add, ios::binary);
    int         flag = 0;
    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

    if(!fi)
        cout << "\n\nWrong person account...";
    else
    {
        fi.read((char *) &X, sizeof(X));
        flag = 1;
    }

    fi.close();
    if(flag)
    {
        {

            /* now making the folder address of his files */
            strcpy(add, "C:\\JG MSG\\USERS\\user");
            strcat(add, X.id);
            strcat(add, "\\subjects.dat");

            /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
            subs    Y;
            /* mail address made now goin to access */
            int     ch = 1;
            fstream f(add, ios::binary | ios::in | ios::out);
            /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

            cout << "\n\n Mail no." << setw(10) << "From" << setw(20) << "Subject" << setw(20) << "Date";
            while(f.read((char *) &Y, sizeof(Y)))
            {
                {
                    lines();
                    cout <<
                        "\n 
"<<setw(4)<<ch++<<setw(15)<<Y.from<<setw(17)<<Y.subject<<setw(19)<<Y.cal.d<<"."<<Y.cal.
m <<
                        "." <<
                        Y.cal.y;
                }
            }

            f.close();

            /*~~~~~~~~~~~*/
            int choice = 0;
            /*~~~~~~~~~~~*/

            cout << "\n\n Enter the number of the message you want to read OR 0 to exit : ";
            cin >> choice;
            if(!choice || choice < 0)
                return;
            else
            {
                {
                    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
                    fstream fic(add, ios::binary | ios::in | ios::out);
                    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

                    fic.seekg((choice - 1) * sizeof(Y), ios::beg);
                    fic.read((char *) &Y, sizeof(Y));
                    strcpy(path, "C:\\JG MSG\\USERS\\user");
                    strcat(path, X.id);
                    strcat(path, "\\inbox\\");
                    strcat(path, Y.subject);
                    strcat(path, ".txt");
                    viewmsg(path, Y.subject);
                    fic.close();
                    goto ini;
                }
            }
        }
    }

    getch();
}

/*
 =======================================================================================================================
 =======================================================================================================================
 */
void intro()
{
    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
    char    s[] = { "Successful" };
    int     cnt = 0, i = 0;
    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

    do
    {
        {
            clrscr();
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\tAccessing James Gleick Servers\n\n";
            cout << setw(i) << "===";
            delay(20);
            if(i <= 77)
                i += 4;
            else
                i = 0;
            cnt += 1;
        }

        while(cnt <= 50);
    } cnt = 0;
    do
    {
        {
            clrscr();
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t Server Link Establishment " << s << " ! ";
            delay(500);
            clrscr();
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t Server Link Establishment " << s;
            delay(500);
            cnt += 1;
        }

        while(cnt < 2);
    } /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/ char    sles[] = "Server Link Establishment Successful";
    int     slesl = strlen(sles);
    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

    for(i = 0; i < slesl; i += 1)
    {
        clrscr();
        gotoxy(5, 13);
        for(int j = i; j < slesl; j += 1) cout << sles[j];
        delay(50);
    }

    clrscr();

    /*~~~~~~*/
    info    X;
    /*~~~~~~*/

    cout << "\n\t\t\tJames Gleick's Messenger";
    cout << "\n\t\t\t~~~~~ ~~~~~~~~ ~~~~~~~~";
    cout << "\n\n\n\t\t\t\tSign Up";
    cout << "\n\nEnter your first name : ";
    gets(X.fname);
    X.fname[0] = toupper(X.fname[0]);   /* changing startin letter to caps */
    cout << "\nEnter your second name : ";
    gets(X.sname);
    X.sname[0] = toupper(X.sname[0]);   /* again changing 1st letter 2 caps */
    cout << "\nEnter your preferred user name : ";
    gets(X.username);

    /*~~~~~~~~~~~~~~~*/
    char    u1name[20];
    /*~~~~~~~~~~~~~~~*/

    strcpy(u1name, X.username);

    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
    ofstream    fout22("C:\\JG MSG\\login\\list.use", ios::binary | ios::app);
    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
    {
        /*~~*/
        use A;
        /*~~*/

        fout22.seekp(0, ios::end);
        strcpy(A.name, X.username);
        fout22.write((char *) &A, sizeof(A));
    }

    fout22.close();

    /*~~~~~~~~~~~~~~*/
    char    tempo[20];
    /*~~~~~~~~~~~~~~*/

    strcpy(tempo, X.username);
    strcat(tempo, "@jgs.com");
    strcpy(X.mname, tempo);
    cnt = 0;
    enpass(X.pass1);
    cout << "\n\nPlease Reconfirm your passowrd";
    cout << "\n~~~~~~ ~~~~~~~~~ ~~~~ ~~~~~~~~";
    enpass(X.pass2);

    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
    char        z[80], file[80];
    char        nm[2], temp[1];
    logid       B;
    ifstream    fin15("C:\\JG MSG\\login\\signs.dat", ios::binary);
    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

    fin15.read((char *) &B, ios::binary);
    nm[0] = B.a;
    nm[1] = '\0';
    fin15.close();
    B.a += 1;

    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
    ofstream    fout16("C:\\JG MSG\\login\\signs.dat", ios::binary);
    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

    fout16.write((char *) &B, ios::binary);
    fout16.close();
    strcpy(X.id, nm);
    strcpy(z, X.username);
    strcat(z, ".jgs");

    /* all the user info files are being saved under name.jgs* */
    strcpy(file, "C:\\JG MSG\\login\\");
    strcat(file, z);

    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
    ofstream    fout7(file, ios::binary);
    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

    fout7.write((char *) &X, sizeof(X));
    fout7.close();
    cout << "\n\nAccount Created Successfully !";
    cout << "\n\nPress Any Key To Proceed To view contact manager ";
    getch();
    contacts(u1name);

    /*~~~~~~~~~~~~~~~~*/
    char    subadd[100];
    /*~~~~~~~~~~~~~~~~*/

    strcpy(subadd, "C:\\JG MSG\\USERS\\user");
    strcat(subadd, X.id);
    strcat(subadd, "\\subjects.dat");

    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
    ofstream    fout256(subadd, ios::binary | ios::app);
    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
    {
        /*~~~~~~*/
        subs    U;
        /*~~~~~~*/

        strcpy(U.from, "JG Team");
        strcpy(U.subject, "Welcome");
        U.cal.d = 1;
        U.cal.m = 1;
        U.cal.y = 2009;
        fout256.write((char *) &U, sizeof(U));
    }

    fout256.close();
    clrscr();
    cout << "\n\t\t\tJames Gleick's Messenger";
    cout << "\n\t\t\t~~~~~ ~~~~~~~~ ~~~~~~~~\n\n";
    cout << "\n\n\n\t\t\t\tAccount Details";
    cout << "\n\n 1. Your USER Name : ";
    puts(X.username);
    cout << "\n 2. Your USER Login ID : ";
    puts(nm);
    cout << "\n 3. Stage 1 Password : ";
    puts(X.pass1);
    cout << "\n 4. Stage 2 Password : ";
    puts(X.pass2);
    cout << "\n\n Restart Application For Changes to Take Place...";
    cout << "\n\n Bye " << X.fname;
    getch();
    exit(0);
}

/*
 =======================================================================================================================
    Weather Functions
 =======================================================================================================================
 */
void final(char A[])
{
    /*~~~~~~~~~~~~~~~~~*/
    int k = 50;
    int l = strlen(A);
    int m = (80 - l) / 2;
    /*~~~~~~~~~~~~~~~~~*/

    cout << m;
    for(int i = 0; i < l; i += 1)
    {
        {
            k = 50;
            for(int j = 40; j > m; j -= 1)
            {
                clrscr();
                gotoxy(m, 10);
                cout.write(A, i);
                gotoxy(j, 10);
                cout << A[i];
                delay(k);
                k -= 2;
            }
        }
    }
}

/*
 =======================================================================================================================
 =======================================================================================================================
 */
void viewdet(int x)
{
menu:
    clrscr();
    gotoxy(x, 3);
    cout << "Weather Database Systems";
    gotoxy(x, 4);
    cout << "~~~~~~ ~~~~~~~~~ ~~~~~~~\n";

    /*~~~~~~~~~~~~~~~~~~*/
    weather A;
    int     b = 0, ch = 1;
    /*~~~~~~~~~~~~~~~~~~*/

    cout << "\n\n List of available cities : \n\n";

    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
    ifstream    fin1("C:\\JG MSG\\settings\\weather.wea", ios::binary);
    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

    if(!fin1)
    {
        cout << "\n\n Database Empty ...!";
        cout << "\n\n Press any key ... !";
        getch();
        return;
    }
    else
    {
        {
            while(fin1.read((char *) &A, sizeof(A)))
            {
                b += 1;
                cout << "\n " << ch << "." << A.city;
                ch += 1;
            }

            fin1.close();
            cout << "\n\nEnter the serial no. of the city or 0 to exit : ";
            cin >> ch;
            if(!ch)
                return;
            else
            {
                {
                    b = 0;

                    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
                    ifstream    fin1("C:\\JG MSG\\settings\\weather.wea", ios::binary);
                    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

                    while(b < ch && fin1.read((char *) &A, sizeof(A))) b += 1;
                    clrscr();
                    gotoxy(x, 3);
                    cout << "Weather Database Systems";
                    gotoxy(x, 4);
                    cout << "~~~~~~ ~~~~~~~~~ ~~~~~~~\n";
                    cout << "\n\n\t\t\t\tCity Details";
                    cout << "\n\n City : ";
                    puts(A.city);
                    cout << "\n Relative Humidity : " << A.relhum;
                    cout << "\n Temperature (C) : " << A.temp;
                    cout << "\n Wind Speed (in kM/h) : " << A.wind;
                    cout << "\n Visibility (in metres) : " << A.vis;
                    cout << "\n\nPress any key ! ";
                    getch();
                    goto menu;
                }
            }
        }
    }
}

/*
 =======================================================================================================================
 =======================================================================================================================
 */
int slide(char s[])
{
    for(int i = 56; i >= 23; i -= 6)
    {
        {
            clrscr();
            cout << "\n\n\t\t\t";
            puts(s);
            gotoxy(i, 4);
            cout << "////// ////////// /////////";
            delay(120);
        }
    }

    clrscr();
    cout << "\n\n\t\t\t";
    puts(s);
    gotoxy(53, 4);
    gotoxy(i + 5, 4);
    cout << "\\\\\\\\\\\\ \\\\\\\\\\\\\\\\\\\\ \\\\\\\\\\\\";
    delay(500);
    clrscr();
    cout << "\n\n\t\t\t";
    puts(s);
    gotoxy(i + 5, 4);
    cout << "====== ========== ======";
    delay(200);
    return(i + 5);
}

/*
 =======================================================================================================================
 =======================================================================================================================
 */
void adddata(int x)
{
    /*~~~~~~~~~~~~~*/
    weather X, Y;
    char    ch = 'y';
    int     i = 0;
    /*~~~~~~~~~~~~~*/

    while(ch == 'y' || ch == 'Y')
    {
        {
cityadd:
            clrscr();
            gotoxy(x, 3);
            cout << "Weather Database Systems";
            gotoxy(x, 4);
            cout << "~~~~~~ ~~~~~~~~~ ~~~~~~~\n";
            cout << "\n\n City No." << i + 1;
            cout << "\n\n City : ";
            gets(X.city);

            /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
            fstream f("C:\\JG MSG\\settings\\weather.wea", ios::binary | ios::in | ios::out);
            int     flag = 0, s = 0;
            /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

            while(f.read((char *) &Y, sizeof(Y)))
            {
                {
                    s += 1;
                    if(strcmpi(Y.city, X.city) == 0)
                    {
                        {
up:
                            {
                                clrscr();
                                gotoxy(x, 3);
                                cout << "Weather Database Systems";
                                gotoxy(x, 4);
                                cout << "~~~~~~ ~~~~~~~~~ ~~~~~~~\n";
                            }

                            cout << "\n\n " << Y.city << " already present in database. Update record.";
                            cout << "\n\n City : ";
                            puts(X.city);
                            cout << "\n Relative Humidity : ";
                            cin >> X.relhum;
                            cout << "\n Temperature (C) : ";
                            cin >> X.temp;
                            cout << "\n Wind Speed (in kM/h) : ";
                            cin >> X.wind;
                            cout << "\n Visibility (in metres) : ";
                            cin >> X.vis;
                            cout << "\n\n Confirm Data Entry (Y/N) : ";
                            cin >> ch;
                            if(ch == 'n' || ch == 'N')
                            {
                                flag = 1;
                                goto up;
                            }
                            else
                            {
                                f.seekg((s - 1) * sizeof(X), ios::beg);
                                f.write((char *) &X, sizeof(X));
                                flag = 2;
                            }

                            f.close();
                            break;
                        }
                    }
                }
            }

            if(flag != 2)
            {
                {
                    cout << "\n Relative Humidity : ";
                    cin >> X.relhum;
                    cout << "\n Temperature (C) : ";
                    cin >> X.temp;
                    cout << "\n Wind Speed (in kM/h) : ";
                    cin >> X.wind;
                    cout << "\n Visibility (in metres) : ";
                    cin >> X.vis;
                    cout << "\n\n Confirm Data Entry (Y/N) : ";
                    cin >> ch;
                    if(ch == 'y' || ch == 'Y')
                    {
                        {
                            /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
                            ofstream    fout("C:\\JG MSG\\settings\\weather.wea", ios::binary | ios::app);
                            /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

                            fout.write((char *) &X, sizeof(X));
                            fout.close();
                        }
                    }
                    else
                        goto cityadd;
                }
            }

            final("Record Updation Processing");
            clrscr();
            gotoxy(x, 3);
            cout << "Weather Database Systems";
            gotoxy(x, 4);
            cout << "~~~~~~ ~~~~~~~~~ ~~~~~~~\n";
            cout << "\n\n Want to add more cities ? (Y/N) : ";
            cin >> ch;
            i += 1;
        }
    }
}

/*
 =======================================================================================================================
 =======================================================================================================================
 */
void weatch()
{
y:
    clrscr();

    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
    int a = slide("Weather Database Systems"), ch;
    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

    gotoxy(a, 3);
    cout << "Weather Database Systems";
    gotoxy(a, 4);
    cout << "~~~~~~ ~~~~~~~~~ ~~~~~~~\n";
    cout << "\n\n\t\t Weather Data Manager Wizard";
    cout << "\n\t\t ~~~~~~~ ~~~~ ~~~~~~~ ~~~~~~";
    cout << "\n\n Choose your options...";
    cout << "\n\n 1. View Details Of Cities in Database";
    cout << "\n 2. Add Cities To Database (Requires Encrypted Secure Login)\n 3. Exit ";
    cout << "\n\n Enter your choice : ";
    cin >> ch;
    if(ch == 1)
    {
        viewdet(a);
        goto y;
    }
    else if(ch == 2)
    {
        {
            /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
            int     f = 0;
            char    passi[100], status[100];
            /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

            enpass(passi, 6);
            clrscr();
            gotoxy(a, 3);
            cout << "Weather Database Systems";
            gotoxy(a, 4);
            cout << "~~~~~~ ~~~~~~~~~ ~~~~~~~\n";
            if(strcmpi(passi, "dwarak") == 0)
            {
                strcpy(status, "Successful");
                f = 1;
            }
            else
                strcpy(status, "Failure");

            /*~~~~~~~~*/
            int cnt = 0;
            /*~~~~~~~~*/

            do
            {
                {
                    clrscr();
                    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t Server Link Establishment " << status << " ! ";
                    delay(500);
                    clrscr();
                    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t Server Link Establishment " << status;
                    delay(500);
                    cnt += 1;
                }

                while(cnt < 5);
            } if(f)
            {
                adddata(a);
                goto y;
            }
            else
                goto y;
        }
    }
    else
        return;
}

/*
 =======================================================================================================================
    End of weather Functions
 =======================================================================================================================
 */
void slideri(char p[])
{
    /*~~~~~~~~~~~~~~~~~~~~~~~~*/
    int     i;
    char    name[] = "Welcome ";
    /*~~~~~~~~~~~~~~~~~~~~~~~~*/

    strcat(name, p);
    for(i = 0; i <= 26; i += 1)
    {
        {
            clrscr();
            cout << "\n\t\t\tJames Gleick's Messenger";
            cout << "\n\t\t\t~~~~~ ~~~~~~~~ ~~~~~~~~\n\n";
            gotoxy(i, 4);
            puts(name);
            delay(25);
        }
    }
}

/*
 =======================================================================================================================
 =======================================================================================================================
 */
void main()
{
start:
    clrscr();

    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
    int     ch;
    char    uname[80], upass[6], id[80], nm[2];
    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

    cout << "\n\t\t\tJames Gleick's Messenger";
    cout << "\n\t\t\t~~~~~ ~~~~~~~~ ~~~~~~~~~";
    cout << "\n\n 1. Sign In\n 2. Weather ";
    cout << "\n 3. Don't have an account...? Sign up\n 4. Exit";
    cout << "\n\n Enter choice : ";

    /* CHOICE CHECK */
    {
        cin >> ch;
        if(ch < 1 || ch > 4)
        {
            cout << "\n\nWrong option";
            delay(3000);
            goto start;
        }
    }

    /*~~~~~~*/
    int k = 0;
    /*~~~~~~*/

    /* CHECKMATE!! */
    switch(ch)
    {
        {
        case 1:
            clrscr();
            cout << "\n\t\t\tJames Gleick's Messenger";
            cout << "\n\t\t\t~~~~~ ~~~~~~~~ ~~~~~~~~";
            cout << "\n\nEnter your username (Max : 8) : ";
            gets(uname);
            enpass(upass);
            strcpy(id, uname);
            strcat(id, ".jgs");
            for(int i = 0; id[i] != '\0'; i += 1) id[i] = toupper(id[i]);

            /* vetti bandha */
            for(i = 0; i <= 11; i += 1)
            {
                clrscr();
                gotoxy(5, k);
                cout << "\t\t\t\tSigning In";
                delay(50);
                k += 1;
            }

            /*~~~~~~~~*/
            int cnt = 0;
            /*~~~~~~~~*/

            do
            {
                {
                    clrscr();
                    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tSigning In\n\n";
                    cout << setw(i) << "===";
                    delay(20);
                    if(i <= 77)
                        i += 4;
                    else
                        i = 0;
                    cnt += 1;
                }

                while(cnt <= 75);
            } /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/ /*
             * vetti bandha ends ;
             * USER ACCOUNT CHECK
             */ ifstream    fin(strcat("C:\\JG MSG\\login\\", id), ios::binary);
            /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

            if(!fin)
            {
                res(1);
            }
            else
            {
                {
                    res(9);

                    /*~~~~~~*/
                    /*
                     * uname[0]=toupper(uname[0]);
                     * ;
                     * Options
                     */
                    info    X;
                    /*~~~~~~*/

                    fin.read((char *) &X, sizeof(X));
                    fin.close();
after:  /* slideri(X.fname);
         * */
                    clrscr();
                    cout << "\n\t\t\tJames Gleick's Messenger";
                    cout << "\n\t\t\t~~~~~ ~~~~~~~~ ~~~~~~~~\n\n";

                    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
                    char    name[4][20] = { { "Check Mail" }, { "Compose" }, { "Contacts" }, { "Sign Out" } };
                    char    choice = 'a';
                    int     top = 0;
                    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

                    do
                    {
                        {
                            /*~~~~~~*/
                            int w = 5;
                            /*~~~~~~*/

                            clrscr();
                            cout << "\n\t\t\tJames Gleick's Messenger";
                            cout << "\n\t\t\t~~~~~ ~~~~~~~~ ~~~~~~~~~\n\n";
                            cout << "\t\t\t\tHi " << X.fname << " !\n\n\t\t\t Choose your options...";

                            /*~~~~~~~~~*/
                            int length;
                            int top1 = 0;
                            /*~~~~~~~~~*/

                            for(int i = 0; i < 4; i += 1)
                            {
                                {
                                    length = 2;
                                    name[i][0] = toupper(name[i][0]);
                                    length += strlen(name[i]);
                                    length = 80 - length;
                                    length /= 2;
                                    gotoxy(length, w + top1 + 4);
                                    puts(name[i]);
                                    top1 += 1;
                                }
                            }

                            if((choice == 'w' || choice == 'W') && top > 0)
                                top -= 1;
                            else if((choice == 's' || choice == 'S') && top < 3)
                                top += 1;
                            else if(choice == 32)
                            {
                                ch = top + 1;
                                choice = 27;
                                continue;
                            }

                            for(i = 2; i < length - 4; i += 1)
                            {
                                gotoxy(76 - i, w + top + 4);
                                cout << "=";
                                delay(25);
                                gotoxy(i, w + top + 4);
                                cout << "=";
                                delay(25);
                            }

                            cout << "\n\n\n\n\n\n\n Use W and S to scroll up";
                            choice = getch();
                        }

                        while(choice != 27);
                    } /*~~~~~~~~~~~~~~~~~~~~~~~~*/ void    composiatte(char[]);
                    /*~~~~~~~~~~~~~~~~~~~~~~~~*/

                    switch(ch)
                    {
                        {
                        case 1:
                            {
                                /*~~~~~~~~~~~~~*/
                                char    temp[20];
                                /*~~~~~~~~~~~~~*/

                                strcpy(temp, uname);
                                mailcheck(temp);
                            }

                            goto after;

                        case 2:
                            composiatte(uname);
                            goto after;

                        case 3:
                            contacts(uname);
                            goto after;

                        case 4:
                            char xy;
                            cout << "\n\nDo you really want to sign out...? (Y/N) : ";
                            cin >> xy;
                            if(xy != 'y' || xy != 'y') goto after;
                            cout << "\nsign out not ready....";
                            break;
                        }
                    }
                }   /* End of else condition */
            }
            break;

        /*
         * goto start;
         */
        case 2:
            weatch();
            break;

        case 3:
            clrscr();
            intro();

        case 4:
            exit(0);
        }
    }

    goto start;
}

char    adrs[] = "C:\\JG MSG\\login\\";

/*
 =======================================================================================================================
 =======================================================================================================================
 */
void composiatte(char uname[])
{
    clrscr();

    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
    int     ch, l, step = 1;
    char    name[12], sub[80], usercheck[10];
    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

comp:
    clrscr();
    cout << "\n\t\t\tJames Gleick's Messenger";
    cout << "\n\t\t\t~~~~~ ~~~~~~~~ ~~~~~~~~\n\n";
    cout << "\n\t\t Welcome to Message Compose Wizard";
    cout << "\n\t\t ~~~~~~~ ~~ ~~~~~~~ ~~~~~~~ ~~~~~~";
    cout << "\n Step : " << step++;
    cout << "\n\n Choose your message length ";
    cout << "\n\n 1. Sweet And Crisp (5 Lines)\n 2. Reaching the Mind (10 Lines) \n 3. Blow your 
own trumpet!!!(15L ines) "; 
cout << "\n\n Enter your choice : ";
    cin >> ch;
    (ch == 1) ? l = 5 : ((ch == 2) ? l = 10 : l = 20);
    clrscr();
    cout << "\n\t\t\tJames Gleick's Messenger";
    cout << "\n\t\t\t~~~~~ ~~~~~~~~ ~~~~~~~~\n\n";
    cout << "\n\t\t\t\tMessage Compose Wizard";
    cout << "\n\t\t\t\t~~~~~~~ ~~~~~~~ ~~~~~~";
    cout << "\n Step : " << step++;

    /*~~~~~~*/
    info    D;
    /*~~~~~~*/

    strcpy(wer, "C:\\JG MSG\\login\\");
    strcat(wer, uname);
    strcat(wer, ".jgs");

    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
    ifstream    fff(wer, ios::binary);
    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

    if(!fff)
    {
        {
            cout << "\n\nNo contacts file found..!! First please organize contacts.";
            cout << "\n\n Press Any key...!";
            return;
        }
    }

    fff.read((char *) &D, sizeof(D));
    fff.close();
    strcpy(wer, "C:\\JG MSG\\USERS\\user");
    strcat(wer, D.id);
    strcat(wer, "\\contacts.con");

    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
    cont        cc;
    ifstream    f12(wer, ios::binary);
    int         k = 0, xx;
    char        names[20][100], username[20][100];
    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

    while(f12.read((char *) &cc, sizeof(cc)))
    {
        strcpy(names[k], cc.name);
        strcpy(username[k], cc.uname);
        k += 1;
    }

    f12.close();

    /*~~~~~~~~~~~~~~~~~~~~~~*/
    /* copied for contacts formation part */
    int     selec[20], d = -1;
    char    cho;
    /*~~~~~~~~~~~~~~~~~~~~~~*/

    for(int i = 0; i < k; i += 1)
    {
        {
            clrscr();
            cout << "\n\t\t\tJames Gleick's Messenger";
            cout << "\n\t\t\t~~~~~ ~~~~~~~~ ~~~~~~~~\n\n";
            cout << "\n\t\t\t Message Compose Wizard";
            cout << "\n\t\t\t ~~~~~~~ ~~~~~~~ ~~~~~~";

            /*~~~~~~~~~~~~~~*/
            char    nmew1[80];
            /*~~~~~~~~~~~~~~*/
            {
                cout << "\n\n Choose from all the available contacts...";
                for(int x = 0; x < k; x += 1)
                {
                    {
                        /*~~~~~~~~~*/
                        int flag = 0;
                        /*~~~~~~~~~*/

                        strcpy(nmew1, names[x]);
                        for(int j = 0; j < k; j += 1)
                        {
                            if(strcmpi(names[selec[j]], names[x]) == 0)
                            {
                                flag = 1;
                                break;
                            }
                        }

                        if(flag == 1)
                        {
                            /*~~~~~~*/
                            int y = 0;
                            /*~~~~~~*/

                            for(; y < strlen(nmew1); y += 1) nmew1[y] = toupper(nmew1[y]);
                        }

                        cout << "\n " << x + 1 << ". " << nmew1;
                    }
                }
            }

            cout << "\n\n Choose Contact No." << i + 1 << " ? (Y/N) : ";
            cin >> cho;
            if(cho == 'y' || cho == 'Y')
            {
                d += 1;
                selec[d] = i;
            }
        }
    }

    cout << "\n\nContacts chosen...!!!";
    cout << "\n\nPress any key...!";
    getch();
    clrscr();
    cout << "\n\t\t\tJames Gleick's Messenger";
    cout << "\n\t\t\t~~~~~ ~~~~~~~~ ~~~~~~~~\n\n";
    cout << "\n\t\t\t Message Compose Wizard";
    cout << "\n\t\t\t ~~~~~~~ ~~~~~~~ ~~~~~~";
    cout << "\n Step : " << step++;
    cout << "\n\n\n To : ";
    for(i = 0; i < d + 1; i += 1) cout << names[selec[i]] << ";";
    cout << "\n\n Subject : ";
    gets(sub);
    cout << "\n Message : ";

    /*~~~~~~~~*/
    int len = 0;
    /*~~~~~~~~*/

    cout << "\n";

    /*~~~~~~~~~~~~~~~~~~*/
    char    topic[80][80];
    /*~~~~~~~~~~~~~~~~~~*/

    do
    {
        cout << "\t\t\b";
        gets(topic[len]);
        len += 1;
    } while(len < l);

    /* all formalities from user completed now */
    for(i = 0; i < d + 1; i += 1)
    {
        {
            len = 0;
            strcat(adrs, username[selec[i]]);
            strcat(adrs, ".jgs");

            /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
            info        Z;
            ifstream    fin50(adrs, ios::binary);
            /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

            fin50.read((char *) &Z, sizeof(Z));
            strcpy(adrs, "C:\\JG MSG\\USERS\\user");
            strcat(adrs, Z.id);
            strcat(adrs, "\\inbox\\");
            strcat(adrs, sub);
            strcat(adrs, ".txt");

            /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
            ofstream    wout(adrs, ios::binary);
            /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

            do
            {
                wout.write(topic[len], strlen(topic[len])).put('\n');
                len += 1;
            } while(len < l);
            wout.close();

            /*~~~~~~~~~~~~~~~~*/
            char    subadd[100];
            /*~~~~~~~~~~~~~~~~*/

            strcpy(subadd, "C:\\JG MSG\\USERS\\user");
            strcat(subadd, Z.id);
            strcat(subadd, "\\subjects.dat");

            /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
            ofstream    fout30(subadd, ios::binary | ios::app);
            /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
            {
                /*~~~~~~*/
                subs    U;
                /*~~~~~~*/

                strcpy(U.from, D.fname);
                strcpy(U.subject, sub);
                U.cal.d = 0;
                U.cal.m = 0;
                U.cal.y = 0;
                fout30.write((char *) &U, sizeof(U));
            }

            fout30.close();
        }
    }

    processing();
    clrscr();
    cout << "\n\t\t\tJames Gleick's Messenger";
    cout << "\n\t\t\t~~~~~ ~~~~~~~~ ~~~~~~~~\n\n";
    cout << "\n\t\t\t Message Compose Wizard";
    cout << "\n\t\t\t ~~~~~~~ ~~~~~~~ ~~~~~~";
    cout << "\n\n\n Message Sent successfully !";
    cout << "\n\nPress Any key...!";
    getch();
}
