#include <iostream>
#include <list>

using namespace std;
/*Miguel Gomez

Wednesday CIT-66-16270

Midterm Check in
*/

//INhertiance practice Sep. 27, 2023 1031AM
// Youtube Channel will be changed to Animal for class for midterm 1059
//name, species = ""
//after class Animal, type in statice inline int numOfAnimals = 0
class YouTubeChannel{
private:
    string Name;
    string OwnerName;
    int SubscribersCount;
    list<string> PublishedVideoTitles;

public:
    YouTubeChannel (string name, string ownerName) {
        Name = name;
        OwnerName = ownerName;
        SubscribersCount = 0;
    }
    void GetInfo(){
    cout << "Name:" << Name;
    cout << "OwnerName:" << OwnerName;
    cout << "SubscribersCount:" << SubscribersCount;
    cout << "Videos:";
    for (string videotitle: PublishedVideoTitles){
        cout << videotitle;
    }
    }
    void Subscribe(){
    SubscribersCount++;
    }
    void Unsubscribe() {
    if (SubscribersCount>0)
        SubscribersCount--;
    }
    void PublishVideo(string title){
    PublishedVideoTitles.push_back(title);}
    };

    class CookingYouTubeChannel: public YouTubeChannel{

    //creating constructor class for "CookingYoutTube
    class CookingYouTubeChannel: public YouTubeChannel
    public:
            CookingYouTubeChannel(string name, string OwnerName):YouRubeChannel(name, ownerName){
            }
    };

    // int the int main body: areate an animal pobject and examine the public members - Aniaml myNewAnimal101
int main()
{
    CookingYouTubeChannel ytChannel("Amy's Kitchen", "Amy");
    ytChannel.GetInfo();


    return 0;
}
