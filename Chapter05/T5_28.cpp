/*
 *FileName: T5_28.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     Mar 19th,2022
 *College:  Henu University
 *Function: 歌曲圣诞节的十二天
 */

#include <iostream>
using namespace std;
int main()
{
    int n = 1;
    for (; n <= 15; n++)
    {
        switch (n)
        {
        case 1:     cout << "first" << " :"; break;
        case 2:     cout << "second" << " :"; break;
        case 3:     cout << "third" << " :"; break;
        case 4:    cout << "fourth" << " :"; break;
        case 5:     cout << "fifth" << " :"; break;
        case 6:     cout << "sixth" << " :"; break;
        case 7:     cout << "seventh" << " :"; break;
        case 8:     cout << "eighth" << " :"; break;
        case 9:     cout << "ninth" << " :"; break;
        case 10:     cout << "tenth" << " :"; break;
        case 11:     cout << "eleventh" << " :"; break;
        case 12:     cout << "twelfth" << " :"; break;
        }
        switch (n)
        {
        case 1:  cout << "my true love sent to me A partridge in a pear tree." << endl << endl; break;
        case 2:  cout << "my true love sent to me Two turtle doves" << endl << endl; break;
        case 3:  cout << "my true love sent to me three French hens, two turtle doves." << endl << endl; break;
        case 4:  cout << "my true love sent to me Four calling birds, three French hens, two turtle doves And a partridge in a pear tree." << endl << endl; break;
        case 5:  cout << "my true love sent to me Five golden rings. Four calling birds, three French hens, two turtle doves And a partridge in a pear tree." << endl << endl; break;
        case 6:  cout << "my true love gave to me Six geese a-laying, Five golden rings. Four calling birds, three French hens, two turtle doves And a partridge in a pear tree." << endl << endl; break;
        case 7:  cout << "my true love gave to mev Seven swans a-swimming, six geese a-laying,Five golden rings.Four calling birds, three French hens, two turtle dovesAnd a partridge in a pear tree." << endl << endl; break;
        case 8:  cout << "my true love gave to me Eight maids a-milking, seven swans a-swimming, six geese a-laying Five golden rings. Four calling birds, three French hens, two turtle doves And a partridge in a pear tree." << endl << endl; break;
        case 9:  cout << "my true love gave to me Nine ladies dancing, eight maids a-milking, seven swans a-swimming, six geese a-laying, Five golden rings. Four calling birds, three French hens, two turtle doves And a partridge in a pear tree." << endl << endl; break;
        case 10: cout << "my true love gave to me Ten lords a-leaping, nine ladies dancing, eight maids a-milking, seven swans a-swimming, six geese a-laying, Five golden rings. Four calling birds, three French hens, two turtle doves And a partridge in a pear tree." << endl << endl; break;
        case 11: cout << "my true love gave to me Eleven pipers piping, ten lords a-leaping, nine ladies dancing, eight maids a-milking, seven swans a-swimming, six geese a-laying, Five golden rings. Four calling birds, three French hens, two turtle doves And a partridge in a pear tree." << endl << endl; break;
        case 12: cout << "my true love gave to me Twelve drummers drumming, eleven pipers piping, ten lords a-leaping, nine ladies dancing, eight maids a-milking,seven swans a-swimming, six geese a-laying,Five golden rings.Four calling birds,three French hens,two turtle dovesAnd a partridge in a pear tree." << endl << endl; break;
        }
    }

    return 0;
}

