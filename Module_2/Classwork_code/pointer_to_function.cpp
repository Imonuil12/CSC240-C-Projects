void error(string s) { /* ... */ }

void (*efct)(string); // pointer to function taking a string argument and returning nothing

void f()
{
    efct = &error; // efct points to error
    efct("error"); // call error through efct
}
