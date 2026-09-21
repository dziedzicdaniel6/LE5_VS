#include <iostream>
using namespace std;

void Initialize();

void GetInput();
void Update();
void Render();

void Shutdown();

int main()
{
	Initialize();

	while (true)
	{
		GetInput();
		Update();
		Render();
	}

	Shutdown();

	return 0;
}

void Initialize()
{
	cout << "Initializing" << endl;
}

void GetInput()
{
	cout << "Getting Input..." << endl;
}
void Update()
{
	cout << "Updating" << endl;
}
void Render()
{
	cout << "Rendering..." << endl;
}

void Shutdown()
{
	cout << "Shutting down";
}