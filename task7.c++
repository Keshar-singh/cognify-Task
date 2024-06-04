#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

class Item {
public:
    int item_id;
    std::string name;
    int quantity;

    Item(int id, std::string n, int q) : item_id(id), name(n), quantity(q) {}

    void display() const {
        std::cout << "ID: " << item_id << ", Name: " << name << ", Quantity: " << quantity << std::endl;
    }
};

class Inventory {
private:
    std::vector<Item> items;

public:
    void addItem(int item_id, const std::string& name, int quantity) {
        Item newItem(item_id, name, quantity);
        items.push_back(newItem);
        std::cout << "Item " << name << " added successfully." << std::endl;
    }

    void displayItems() const {
        if (items.empty()) {
            std::cout << "No items in the inventory." << std::endl;
        } else {
            for (const auto& item : items) {
                item.display();
            }
        }
    }

    void searchByName(const std::string& name) const {
        bool found = false;
        for (const auto& item : items) {
            if (std::equal(item.name.begin(), item.name.end(), name.begin(), name.end(),
                           [](char a, char b) { return tolower(a) == tolower(b); })) {
                item.display();
                found = true;
            }
        }
        if (!found) {
            std::cout << "No items found with name: " << name << std::endl;
        }
    }

    void searchByID(int item_id) const {
        bool found = false;
        for (const auto& item : items) {
            if (item.item_id == item_id) {
                item.display();
                found = true;
            }
        }
        if (!found) {
            std::cout << "No items found with ID: " << item_id << std::endl;
        }
    }
};

int main() {
    Inventory inventory;
    int choice;

    do {
        std::cout << "\nInventory Management System\n";
        std::cout << "1. Add Item\n";
        std::cout << "2. Display Items\n";
        std::cout << "3. Search Item by Name\n";
        std::cout << "4. Search Item by ID\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
        case 1: {
            int id, quantity;
            std::string name;
            std::cout << "Enter item ID: ";
            std::cin >> id;
            std::cout << "Enter item name: ";
            std::cin >> name;
            std::cout << "Enter item quantity: ";
            std::cin >> quantity;
            inventory.addItem(id, name, quantity);
            break;
        }
        case 2:
            inventory.displayItems();
            break;
        case 3: {
            std::string name;
            std::cout << "Enter item name to search: ";
            std::cin >> name;
            inventory.searchByName(name);
            break;
        }
        case 4: {
            int id;
            std::cout << "Enter item ID to search: ";
            std::cin >> id;
            inventory.searchByID(id);
            break;
        }
        case 5:
            std::cout << "Exiting..." << std::endl;
            break;
        default:
            std::cout << "Invalid choice. Please try again." << std::endl;
        }
    } while (choice != 5);

    return 0;
}
