// 1. Traditional for loop
for (int i = 0; i < 10; i++)
{
    std::cout << i << std::endl;
}

// Range-based for loop
for (int value : numbers)
{
    std::cout << value << std::endl;
}

// 3. Range-based loop with reference
// Changes the original elements.
for (int& value : numbers)
{
    value *= 2;
}

// Read-only and efficient:

for (const int& value : numbers)
{
    std::cout << value << std::endl;
}


for (int value : numbers)             // copy
for (int& value : numbers)            // reference, can modify
for (const int& value : numbers)      // reference, read-only



if (temperature > 20 && temperature < 30)
{
    std::cout << "Normal";
}