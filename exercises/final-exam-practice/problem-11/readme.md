Classes Cow and Duck are concrete classes derived from class NoisyAnimal given as follows.

```
class NoisyAnimal { public: virtual void exclaim() const = 0; };
```

Define one function animal_trigger() which takes either a Cow or Duck as input and invokes its exclaim() function. For example,

```
Duck daffy;
Cow larry;
animal_trigger(daffy); // Quack! (perhaps)
animal_trigger(larry); // Moo! (perhaps)
```

Define one function only.
