#include <stdio.h>
#include <Windows.h>
/*
// Function that will be executed by the threads
DWORD WINAPI thread_function(LPVOID lpParam) {
    char* message = (char*)lpParam;
    printf("%s\n", message);
    return 0;
}

int main() {
    HANDLE thread1, thread2;
    char* message1 = "Thread 1 says hello!";
    char* message2 = "Thread 2 says hi!";

    // Create two threads, each with a different message to print
    thread1 = CreateThread(NULL, 0, thread_function, (LPVOID)message1, 0, NULL);
    thread2 = CreateThread(NULL, 0, thread_function, (LPVOID)message2, 0, NULL);

    // Wait for both threads to finish to ensure synchronized output
    WaitForSingleObject(thread1, INFINITE);
    WaitForSingleObject(thread2, INFINITE);

    // Close the thread handles to release system resources
    CloseHandle(thread1);
    CloseHandle(thread2);

    return 0;

    
}

*/
