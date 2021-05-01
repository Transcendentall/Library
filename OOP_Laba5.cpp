#include <iostream>
#include <string>

using namespace std;


class book
{

    private:
        std::string name   = "";
        std::string author = "";

    public:

void setname(std::string iname)
{
    this->name = iname;
}
std::string getname()
{
    return this->name;
}
void setauthor(std::string iauthor)
{
    this->author = iauthor;
}
std::string getauthor()
{
    return this->author;
}

    protected:

};

class library
{
private:

    book *libr;
    unsigned short int counter = 0;
    unsigned short int Nmax;

public:

    library(unsigned short int N)
    {
        Nmax=N;
        libr = new book[Nmax];
    }
    void addbook(book* b1)
    {
        if (counter<Nmax)
        {
        libr[counter].setname(b1->getname());
        libr[counter].setauthor(b1->getauthor());
        ++counter;
        }
        else
        {
            cout << "���������� ���������!" << endl;
        }
    }

    void findbook()
    {
        string findname   = "";
        std::string findauthor = "";
        int findtype = -1;
        cout << "�� ��� ������, ��� �� ����������� ������ �����..." << endl;
    while ((findtype != 1) && (findtype != 2) && (findtype != 3) && (findtype != 4))
    {
            cout << "�������� ��� ������ �����. �������:" << endl;
            cout << " 1 - ���� ������ ������ ������ �� ��������;" << endl;
            cout << " 2 - ���� ������ ������ ������ �� ������;" << endl;
            cout << " 3 - ���� ������ ������ �� �������� � �� ������;" << endl;
            cout << " 4 - ���� ������ ������ �� �������� ��� �� ������." << endl;
            cin >> findtype;
            if ((findtype != 1) && (findtype != 2) && (findtype != 3) && (findtype != 4))
            {
            cout << "�� ���-�� �� �� �����. ���������� �����..." << endl;
            }
    }


    if (findtype==1)
    {
            cout << "������� �������� ����� ������� �� ��������. ������: 'Voina i mir' (��� �������): " << endl;
            do
            {
                getline(cin, findname);
            }
            while (findname.length() == 0);
            cout << endl;
            cout << "����..." << endl;
            cout << "========================" << endl << endl;
    for (int j=0; j<Nmax; ++j)
    {
        if (libr[j].getname()==findname)
        {
            cout << "�� ����� ��� ���: '" << libr[j].getname() << "', ����� " << libr[j].getauthor() << ". " << endl;
        }
    }
            cout << endl << "========================" << endl;
        cout << endl << "��, ��� �� �����, ��������� ����, ����� ����� ��������. ���� ��� �����, �� ����� ����� � ��� ���." << endl << endl;

    }


        if (findtype==2)
    {
            cout << "������� ��� ������ ������� �� ��������. ������: 'L. N. Tolstoy' (��� �������): " << endl;
            do
            {
                getline(cin, findauthor);
            }
            while (findauthor.length() == 0);
            cout << endl;
            cout << "����..." << endl;
            cout << "========================" << endl << endl;
    for (int j=0; j<Nmax; ++j)
    {
        if (libr[j].getauthor()==findauthor)
        {
            cout << "�� ����� ��� ���: '" << libr[j].getname() << "', ����� " << libr[j].getauthor() << ". " << endl;
        }
    }
            cout << endl << "========================" << endl;
        cout << endl << "��, ��� �� �����, ��������� ����, ����� ����� ��������. ���� ��� �����, �� ���� ������ ������ � ��� ���." << endl << endl;

    }



            if (findtype==3)
    {
            cout << "������� �������� ����� ������� �� ��������. ������: 'Voina i mir' (��� �������): " << endl;
            do
            {
                getline(cin, findname);
            }
            while (findname.length() == 0);
            cout << endl;
            cout << "������� ��� ������ ������� �� ��������. ������: 'L. N. Tolstoy' (��� �������): " << endl;
            do
            {
                getline(cin, findauthor);
            }
            while (findauthor.length() == 0);
            cout << endl;
            cout << "����..." << endl;
            cout << "========================" << endl << endl;
    for (int j=0; j<Nmax; ++j)
    {
        if ((libr[j].getname()==findname) && (libr[j].getauthor()==findauthor))
        {
            cout << "�� ����� ��� ���: '" << libr[j].getname() << "', ����� " << libr[j].getauthor() << ". " << endl;
        }
    }
            cout << endl << "========================" << endl;
        cout << endl << "��, ��� �� �����, ��������� ����, ����� ����� ��������. ���� ��� �����, �� ���� � ������ ���������� ������ ������ � ��� ���." << endl << endl;

    }



            if (findtype==4)
    {
            cout << "������� �������� ����� ������� �� ��������. ������: 'Voina i mir' (��� �������): " << endl;
            do
            {
                getline(cin, findname);
            }
            while (findname.length() == 0);
            cout << endl;
            cout << "������� ��� ������ ������� �� ��������. ������: 'L. N. Tolstoy' (��� �������): " << endl;
            do
            {
                getline(cin, findauthor);
            }
            while (findauthor.length() == 0);
            cout << endl;
            cout << "����..." << endl;
            cout << "========================" << endl << endl;
    for (int j=0; j<Nmax; ++j)
    {
        if ((libr[j].getname()==findname) || (libr[j].getauthor()==findauthor))
        {
            cout << "�� ����� ��� ���: '" << libr[j].getname() << "', ����� " << libr[j].getauthor() << ". " << endl;
        }
    }
            cout << endl << "========================" << endl;
        cout << endl << "��, ��� �� �����, ��������� ����, ����� ����� ��������. ���� ��� �����, �� ���� � ������ ���������� ��� ������ ������ � ��� ���." << endl << endl;

    }



    }


};



int main()
{
    int actiontype = -1;

    int N=10;
    library l1(N);

    book* b0 = new book();
    b0->setauthor("A. N. Tolstoy");
    b0->setname("Giperboloid inzhenera Garina");
    book* b1 = new book();
    b1->setauthor("A. S. Pushkin");
    b1->setname("Evgeniy Onegin");
    book* b2 = new book();
    b2->setauthor("L. N. Tolstoy");
    b2->setname("Voina i mir");
    book* b3 = new book();
    b3->setauthor("L. N. Tolstoy");
    b3->setname("Sevastopolskie rasskasi");
    book* b4 = new book();
    b4->setauthor("A. P. Chehov");
    b4->setname("Chelovek v futlyare");
    book* b5 = new book();
    b5->setauthor("F. M. Dostoyevskiy");
    b5->setname("Bratya Karamazovi");
    book* b6 = new book();
    b6->setauthor("L. N. Tolstoy");
    b6->setname("Anna Karenina");
    book* b7 = new book();
    b7->setauthor("F. M. Dostoyevskiy");
    b7->setname("Prestuplenie i nakazanie");
    book* b8 = new book();
    b8->setauthor("A. S. Pushkin");
    b8->setname("Kapitanskaya dochka");
    book* b9 = new book();
    b9->setauthor("M. Y. Lermontov");
    b9->setname("Geroy nashego vremeni");

    l1.addbook(b0);
    l1.addbook(b1);
    l1.addbook(b2);
    l1.addbook(b3);
    l1.addbook(b4);
    l1.addbook(b5);
    l1.addbook(b6);
    l1.addbook(b7);
    l1.addbook(b8);
    l1.addbook(b9);

    cout << "����� ���������� � ���� ����������!" << endl;

while ((actiontype!=1) && (actiontype!=2))
    {
    cout << "�������� ��������. �������:" << endl;
    cout << " 1 - ���� ������ �������� � ��� �����-�� �����;" << endl;
    cout << " 2 - ���� ������ �������� ����������." << endl;
    cin >> actiontype;
    if ((actiontype!=2) && (actiontype!=1))
            {
            cout << "�� ���-�� �� �� �����. ���������� �����..." << endl;
            actiontype=-1;
            }
    if (actiontype==1)
    {
    l1.findbook();
    actiontype=-1;
    }
    if (actiontype==2)
    {
        cout << "��� �������?..." << endl;
        cout << "...�� �����, �� ��������." << endl;
    }

    }


return 0;
}
