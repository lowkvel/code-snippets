#include <iostream>
#include <array>

using namespace std;

void printit(const array<int, 3> &a) {
    for (auto i : a)
        cout << i << " ";
    cout << endl;
}

int main() {
    /* size fixed, not expandable/shrinkable */

    // initialization
    cout << "initialization: " << endl;
    array<int, 3> a1;           printit(a1);    // with random elements
    array<int, 3> a2 {};        printit(a2);    // with all 0s
    array<int, 3> a3 {1, 3, 5}; printit(a3);    // with specified elements
    array<int, 3> a4 {1, 3};    printit(a4);    // with specified elements + tail 0s
    cout << endl;

    // iterator
    /*
                .begin                  .end
        xth.ve  1st.ae  2nd.ae  3rd.ae  xth.ve
        .rend                   .rbegin

        ae: actual element
        ve: position before or after actual element
    */
    cout <<"iterator: " << endl;
    cout << ".begin(): " << a3.begin()  << "; *.begin(): " << *a3.begin() << endl;
    cout << ".end(): " << a3.end()      << "; *.end(): " << *a3.end() << endl;
    //cout << ".rbegin(): " << a3.rbegin() << "; *.rbegin(): " << *a3.rbegin() << endl;
    //cout << ".rend(): " << a3.rend() << "; *.rend(): " << *a3.rend() << endl;
    cout << endl;

    // capacity
    cout << "capacity: " << endl
        << ".size(): "      << a3.size() << endl        // fixed size
        << ".max_size(): "  << a3.max_size() << endl    // fixed size
        << ".empty(): "     << a3.empty() << endl;
    cout << endl;

    // element access
    cout << "element access: " << endl
        << "[]: "       << a3[1] << endl        // element at position
        << ".at(): "    << a3.at(1) << endl     // element at position, safe check
        << ".front(): " << a3.front() << endl   // first element
        << ".back(): "  << a3.back() << endl    // last element
        << ".data(): "  << a3.data() << endl;   // returns a pointer to array
    cout << endl;

    // modifier
    cout << "modifier: " << endl;
    cout << "a1 before .fill(): ";  printit(a1);
    a1.fill(-1);    // fill the whole array with a specified element
    cout << "a1 after .fill(): ";   printit(a1);
    cout << "a1 before .swap(): ";  printit(a1);
    a1.swap(a2);    // swap the content of two arrays
    cout << "a1 after .swap(): ";   printit(a1);
    cout << endl;

    return 0;
}
