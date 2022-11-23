#include "main.h"

//code source : https://learn.microsoft.com/en-us/windows/win32/coreaudio/capturing-a-stream

int main() {

    HRESULT hr;
    hr = CoInitialize(nullptr);

    //declare MyAudioSink object
    MyAudioSink pMySink;

    hr = RecordAudioStream(&pMySink);

    cout << "done";
};
