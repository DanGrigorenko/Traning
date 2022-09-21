#include <iostream>


class Sportsman
{
private:
    int counterVictory;
    double weight;
    char nickName;
    bool fractures;
    std::string name; 
public:
    Sportsman() = default;
    Sportsman(int counterVictory, double weight, char nickName, bool fractures, std::string& name);
    ~Sportsman();

    void setCounterVictory(int value);
    void setWeight(double value);
    void setNickName(char value);
    void setFractures(bool value);
    void setName(std::string& value);

    int getCounterVictory() const;
    double getWeight() const;
    char getNickName() const;
    bool getFractures() const;
    std::string getName() const;

    void infoSportsman() const;
    double bodyMassIndex(double height);
};

