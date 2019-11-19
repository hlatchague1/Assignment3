
class MovieFactory {
 public:
  static Movie *CreateMovie(const string& commandLine);
  virtual ~MovieFactory();

 private:
};

// me