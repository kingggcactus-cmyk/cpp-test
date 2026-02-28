class Cwin{
    protected:
      char id;
      int width, height;
    public:
      Cwin(char ch, int w, int h):id(ch), width(w), height(h){}
      void show(void);
};