#include <QtTest>
#include "musicgenre.h"

// add necessary includes here

class musictest : public QObject
{
    Q_OBJECT

public:
    musictest();
    ~musictest();

private slots:
    void test_case1();

};

musictest::musictest()
{

}

musictest::~musictest()
{

}

void musictest::test_case1() {
    MusicGenre mus;
    mus.insertInput('rock');
    mus.insertInput('pop');
    double result = mus.getStamp();

    QCOMPARE(result, 'rock');
    QVERIFY(result >= 0);

}

QTEST_APPLESS_MAIN(musictest)

#include "tst_musictest.moc"
