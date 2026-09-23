/*
 * Below is the interface for Iterator, which is already defined for you.
 * **DO NOT** modify the interface for Iterator.
 *
 *  class Iterator {
 *		struct Data;
 * 		Data* data;
 *  public:
 *		Iterator(const vector<int>& nums);
 * 		Iterator(const Iterator& iter);
 *
 * 		// Returns the next element in the iteration.
 *		int next();
 *
 *		// Returns true if the iteration has more elements.
 *		bool hasNext() const;
 *	};
 */

class PeekingIterator : public Iterator {
private:
    int nextElement;
    bool hasPeeked;
public:
	PeekingIterator(const vector<int>& nums)
        : Iterator(nums) {
        
        hasPeeked = false;
    }

    int peek() {

        if (!hasPeeked) {
            nextElement = Iterator::next();
            hasPeeked = true;
        }

        return nextElement;
    }

    int next() {

        if (hasPeeked) {
            hasPeeked = false;
            return nextElement;
        }

        return Iterator::next();
    }

    bool hasNext() {

        return hasPeeked || Iterator::hasNext();
    }
};