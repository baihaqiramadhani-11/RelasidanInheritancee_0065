#include <iostream>
#include <string>
using namespace std;

// ================= CLASS USER =================
class User {
protected:
    static int globalId;
    int id;
    string nama;
    string email;

public:
    // Constructor
    User(string pNama, string pEmail) {
        id = generateId();
        nama = pNama;
        email = pEmail;
    }

    // Function generate ID
    int generateId() {
        return ++globalId;
    }
};

// Inisialisasi static variable
int User::globalId = 0;

// ================= CLASS MEMBER =================
class Member : public User {
private:
    bool status; // true = aktif, false = nonaktif

public:
    // Constructor
    Member(string pNama, string pEmail, bool pStatus)
        : User(pNama, pEmail) {
        status = pStatus;
    }

    // Menampilkan profile member
    void showProfile() {
        cout << "ID      : " << id << endl;
        cout << "Nama    : " << nama << endl;
        cout << "Email   : " << email << endl;
        cout << "Status  : ";

        if (status) {
            cout << "Aktif" << endl;
        } else {
            cout << "Nonaktif" << endl;
        }

        cout << "------------------------" << endl;
    }

    // Mengubah status member
    void toggleStatus() {
        status = !status;
    }
};

// ================= CLASS ADMIN =================
class Admin : public User {
public:
    // Constructor
    Admin(string pNama, string pEmail)
        : User(pNama, pEmail) {}

    // Menampilkan semua member
    void showAllMember(Member members[], int jumlah) {
        cout << "\n===== DATA MEMBER =====" << endl;

        for (int i = 0; i < jumlah; i++) {
            members[i].showProfile();
        }
    }

    // Mengubah status aktivasi member
    void toggleActivationMember(Member &member) {
        member.toggleStatus();
    }
};

// ================= MAIN PROGRAM =================
int main() {

    // Membuat object member
    Member member1("Haqi", "Haqi@gmail.com", true);
    Member member2("Erika", "Erika@gmail.com", false);

    // Array member
    Member daftarMember[] = {
        member1,
        member2
    };

    // Membuat object admin
    Admin admin1("Admin", "admin@gmail.com");

    // Menampilkan semua member
    admin1.showAllMember(daftarMember, 2);

    // Mengubah status member ke-2
    admin1.toggleActivationMember(daftarMember[1]);

    cout << "\nSetelah Status Diubah:\n" << endl;

    // Menampilkan ulang data member
    admin1.showAllMember(daftarMember, 2);

    return 0;
}