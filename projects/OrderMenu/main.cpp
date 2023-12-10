#include <iostream>
#include <vector>
#include <string>

class Item
{
public:
    std::string name;
    double price;

    Item(std::string n, double p) : name(n), price(p) {}
};

class Menu
{
public:
    std::vector<Item> items;

    void addItem(const Item &item)
    {
        items.push_back(item);
    }

    void displayMenu()
    {
        std::cout << "Menu:\n";
        for (int i = 0; i < items.size(); i++)
        {
            std::cout << i + 1 << ". " << items[i].name << " - $" << items[i].price << "\n";
        }
    }
};

class Order
{
public:
    std::vector<Item> orderItems;

    void addItem(const Item &item)
    {
        orderItems.push_back(item);
    }

    double calculateTotal()
    {
        double total = 0.0;
        for (Item &item : orderItems)
        {
            total += item.price;
        }
        return total;
    }
};

int main()
{
    Menu menu;
    menu.addItem(Item("Burger", 5.99));
    menu.addItem(Item("Pizza", 7.99));
    menu.addItem(Item("Salad", 4.99));

    Order order;
    int choice = 0;

    while (true)
    {
        menu.displayMenu();
        std::cout << "Enter the item number to order (0 to finish): ";
        std::cin >> choice;

        if (choice == 0)
            break;
        if (choice > 0 && choice <= menu.items.size())
        {
            order.addItem(menu.items[choice - 1]);
            std::cout << menu.items[choice - 1].name << " added to your order.\n";
        }
        else
        {
            std::cout << "Invalid choice. Please try again.\n";
        }
    }

    std::cout << "Your total is: $" << order.calculateTotal() << "\n";
    return 0;
}
