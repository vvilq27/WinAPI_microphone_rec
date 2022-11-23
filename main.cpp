#include "main.h"

//code source : https://learn.microsoft.com/en-us/windows/win32/coreaudio/capturing-a-stream
//              https://stackoverflow.com/questions/59483071/trying-to-create-a-wav-file-with-capturing-a-stream-from-win32-wasapi-c

int main() {

    HRESULT hr;
    hr = CoInitialize(nullptr);

    //declare MyAudioSink object
    MyAudioSink pMySink;

    hr = RecordAudioStream(&pMySink);

    cout << "done";
};
