#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Set up the game world
    string location = "start";
    string inventory[10] = {};
    int inventorySize = 0;

    // Main game loop
    while (location != "exit")
    {
        // Print the current location
        cout << "You are at the " << location << endl;

        // Print the available actions
        cout << "What do you want to do?" << endl;
        cout << "1. Look around" << endl;
        cout << "2. Go somewhere" << endl;
        cout << "3. Take an object" << endl;
        cout << "4. Use an object" << endl;
        cout << "5. Check inventory" << endl;

        // Get the player's action
        int action;
        cin >> action;

        // Perform the action
        if (action == 1)
        {
            // Look around the current location
            cout << "You see a door to the north and a treasure chest to the east." << endl;
        }
        else if (action == 2)
        {
            // Go to a new location
            cout << "Where do you want to go?" << endl;
            cout << "1. North" << endl;
            cout << "2. East" << endl;

            int direction;
            cin >> direction;

            if (direction == 1)
            {
                location = "room";
            }
            else if (direction == 2)
            {
                location = "treasure room";
            }
        }
        else if (action == 3)
        {
            // Take an object
            cout << "What do you want to take?" << endl;
            cout << "1. Key" << endl;
            cout << "2. Coin" << endl;

            int object;
            cin >> object;

            if (object == 1)
            {
                inventory[inventorySize] = "key";
                inventorySize++;
                cout << "You take the key." << endl;
            }
            else if (object == 2)
            {
                inventory[inventorySize] = "coin";
                inventorySize++;
                cout << "You take the coin." << endl;
            }
        }
        else if (action == 4)
        {
            // Use an object
            cout << "What do you want to use?" << endl;
            for (int i = 0; i < inventorySize; i++)
            {
                cout << i+1 << ". " << inventory[i] << endl;
            }

            int object;
            cin >> object;
            object--; // Adjust for zero-based indexing

            if (inventory[object] == "key")
            {
                cout << "You unlock the door." << endl;
            }
            else if (inventory[object] == "coin")
            {
                cout << "You put the coin in the treasure chest." << endl;
            }
        }
        else if (action == 5)
        {
           
 }
