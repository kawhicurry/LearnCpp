union Value {
    char *s;
    int   i;
};
struct Entry {
    char *name;
    Type  t;
    Value v;
};
void f(Entry *p) {
    if (p->t == str) {
        cout << p->v.s;
    }
}
