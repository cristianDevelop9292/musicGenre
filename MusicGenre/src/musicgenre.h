#ifndef MUSICGENRE_H
#define MUSICGENRE_H


class MusicGenre {
private:
    char stamp;
    char input;
    char rap;
    char jazz;
    char country;
    char pop;
    char rock;
    char alternative;
    char blues;
    char classic;

public:
    MusicGenre();
    void insertInput(double input);
    double getStamp();
    void clear();
};


class Instruments: public MusicGenre {
private:
    char stamp;
    char input;
    char string;
    char woodwind;
    char bass;
    char percusion;
    char keyboard;
public:
    MusicGenre();
    void insertInput(double input);
    double getStamp();
    void clear();
};

class artists: public MusicGenre {
private:
    char stamp;
    char input;
    char soprano;
    char alto;
    char tenor;
    char bass;
public:
    MusicGenre();
    void insertInput(double input);
    double getStamp();
    void clear();
};

class timeStamp: public MusicGenre {
private:
    char stamp;
    char input;
    char modern;
    char oldies;
    char classical;
public:
    MusicGenre();
    void insertInput(double input);
    double getStamp();
    void clear();
};

class origin: public MusicGenre {
private:
    char stamp;
    char input;
    char country;
    char city;
public:
    MusicGenre();
    void insertInput(double input);
    double getStamp();
    void clear();
};


#endif // MUSICGENRE_H
