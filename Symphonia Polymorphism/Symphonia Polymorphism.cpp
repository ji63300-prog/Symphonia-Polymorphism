#include <iostream>
#include <vector>
using namespace std;

class Instrument{
protected:
    string name;
    string sound;
public:
    Instrument(string n, string s) {
        name = n;
        sound = s;;
    }

	virtual string play() {
		return sound;
	}

};

class Trumpet : public Instrument {
protected:
public:
	Trumpet(string n):
        Instrument(n, "Toot") {
	}

	virtual string play(){
		string music = sound + " " + sound + " " + sound;	
		return music;
	}
};

class Violin : public Instrument {
protected:
public:
	Violin(string n) :
		Instrument(n, "Vwa") {
	}

	virtual string play() {
		string music = sound + " " + sound + " " + sound + " " + sound + " " + sound;
		return music;
	}
};

class Piano : public Instrument {
protected:
public:
	Piano(string n) :
		Instrument(n, "Dee") {
	}

	virtual string play() {
		string music = sound + " " + sound;
		return music;
	}
};

class Trombone : public Instrument {
protected:
public:
	Trombone(string n) :
		Instrument(n, "Dwooo") {
	}

	virtual string play() {
		string music = sound + " " + sound;
		return music;
	}
};

class Singer : public Instrument {
protected:
public:
	Singer(string n) :
		Instrument(n, "Blah") {
	}

	virtual string play() {
		string music = sound + " " + sound + " " + sound + " " + sound + " " + sound + " " + sound;
		return music;
	}
};

class Orchestra {
private:
	vector<Instrument*> instruments;

public:
	void add(Instrument* i) {
		instruments.push_back(i);
	}

	void play() {
		for (int i = 0; i < instruments.size(); i++) {
			cout << instruments[i]->play() << endl;
		}
	}
};

int main()
{
	Orchestra orchestra;

	orchestra.add(new Trumpet("Trumpet"));
	orchestra.add(new Violin("Violin"));
	orchestra.add(new Piano("Piano"));
	orchestra.add(new Trombone("Trombone"));
	orchestra.add(new Singer("Singer"));

	orchestra.play();

}





