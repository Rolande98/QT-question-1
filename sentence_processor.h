#ifndef SENTENCE_PROCESSOR_H
#define SENTENCE_PROCESSOR_H
#include <QDialog>
#include <QString>
QT_BEGIN_NAMESPACE
namespace Ui { class sentence_processor; }
QT_END_NAMESPACE

class sentence_processor : public QDialog
{
    Q_OBJECT

public:

    ~sentence_processor();
        int getWordNumber(QString sentence);
        int getVowelNumber(QString sentence);
        bool isReversible (QString sentence);
        QString wordsReversed (QString sentence);
        QString formatSentence (QString sentence);

};
#endif // SENTENCE_PROCESSOR_H
