#include "main.h"


int main() {

    HRESULT hr;
    hr = CoInitialize(nullptr);

    //declare MyAudioSink object
    MyAudioSink pMySink;

    hr = RecordAudioStream(&pMySink);

    cout << "done";
};
