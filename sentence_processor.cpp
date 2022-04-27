#include "sentence_processor.h"
#include "ui_sentence_processor.h"
#include <QStringList>

int sentence_processor:: getWordNumber(QString sentence)
{
    return sentence.split(" ").size();
}


int sentence_processor:: getVowelNumber(QString sentence)
{
    int numOfVowels =0;
    numOfVowels += sentence.count("a",Qt::CaseInsensitive);
    numOfVowels += sentence.count("e",Qt::CaseInsensitive);
    numOfVowels += sentence.count("i",Qt::CaseInsensitive);
    numOfVowels += sentence.count("o",Qt::CaseInsensitive);
    numOfVowels += sentence.count("u",Qt::CaseInsensitive);
    return numOfVowels;
}


bool sentence_processor:: isReversible (QString sentence)
{
    int x= QString::compare(sentence,wordsReversed(sentence),Qt::CaseInsensitive);
    if (x==0)
        return true;
    return false;
}


QString sentence_processor:: wordsReversed (QString sentence)
{
    QStringList split = sentence.split(" ");
    QStringList reversed;
    for(int i= split.size()-1 ; i >= 0; i--)
    {
        reversed.append(split.at(i));
    }
    return reversed.join(" ");
}


QString sentence_processor:: formatSentence (QString sentence)
{
    sentence.trimmed ();
    sentence.replace(0,1,sentence.at(0).toUpper());

    if (sentence.at (sentence.size()-1)!= '.')
        sentence.append('.');

    return sentence;
}
