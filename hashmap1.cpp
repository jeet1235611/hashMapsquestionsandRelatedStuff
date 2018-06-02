#include <unordered_map>
#include <string>
using namespace std;

int main() {
        unordered_map<string, int>  ourmap;
        //insert.
        pair<string, int> p("abc", 1);
        ourmap.insert(p);
        /*
        ourmap.at("abc",1);
        cout << ourmap.at("abc") << endl;
        */
        ourmap["def"] = 2;
        cout << ourmap.at("def") << endl;
        cout << ourmap["def"] << endl;


        //insert
        ourmap["jeet"] = 99;
        cout << ourmap["jeet"] << endl;
        /*
        cout << ourmap.at("abc") << endl;
        cout << ourmap["ghi"] << endl;
        cout << ourmap["ghi"] << endl;
        cout << ourmap.at("abc") << endl;
        */

        //insert.
        ourmap["ghi"] == 101;
        ourmap["pqrs"] = 100;

        //Check Presence.
        if (ourmap.count("ghi") > 0) {
                cout << "Key is PRESENT! " << endl;
        }

        pair<string, int> t("xyz", 1000);
        ourmap.insert(t);

        cout << ourmap.at("xyz") << endl;

        //erase.
        ourmap.erase("ghi");

        if(ourmap.count("ghi") > 0 ){
                cout << "Key is Present " << endl;
        }
        else
                cout << "Key is NOT PRESENT " << endl;
}
