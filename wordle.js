/**
 * Find a combination of 5 5-letter words,
 * such that none of the 5 words share a single character.
 * So 5 words, a total of 25 unique characters.
 * If one word is `adieu`, none of the other 4 words can
 * contain 'a', 'd', 'i', 'e', 'u'.
 */
const allWords = require("./words.json");

/**
 * Returns the solution to the problem
 *
 * @example ``js
 * [
 *   [ 'bemix', 'clunk', 'grypt', 'vozhd', 'waqfs' ],
 *   [ 'bling', 'jumpy', 'treck', 'vozhd', 'waqfs' ],
 *   [ 'blonx', 'fritz', 'gyved', 'jacks', 'whump' ],
 *   ...
 * ]
 * ``
 *
 * @return An array of solutions (Array of 5 element arrays)
 */

// checking if two words have a common letter
function haveCommon(words1, words2) {
    for (let i = 0; i < 5; i++) {
        for (let j = 0; j < 5; j++) {
            if (words1[i] === words2[j]) {
                return true;
            }
        }
    }

    return false;
}

function hasDuplicates(word) {
    return new Set(word).size !== 5;
}

function hasThreeVowels(word) {
    const vowels = ["a", "e", "i", "o", "u", "y"];
    let vowelCount = 0;

    for (let i = 0; i < vowels.length; i++) {
        if (word.includes(vowels[i])) {
            vowelCount++;
            if (vowelCount >= 3) {
                return true;
            }
        }
    }

    return false;
}

function removeAnagrams(words) {
    const wordsWithoutAnagrams = {};

    // shore/horse, harks/shark, nails/snail, tutor/trout, torte/otter, sneak/snake
    words.forEach(function (word) {
        const sorted = word.split("").sort().join("");
        wordsWithoutAnagrams[sorted] = word;
    });

    return Object.values(wordsWithoutAnagrams).sort();
}

// helix, benom, kinaj, manzi, kelmo, henry, jazny
function precalculateCommons(words) {
    const calculated = [];
    for (let i = 0; i < words.length; i++) {
        calculated[i] = [];
        for (let j = i + 1; j < words.length; j++) {
            calculated[i][j] = haveCommon(words[i], words[j]);
        }
    }

    return calculated;
}

function solution() {
    const result = [];
    const usefulWords = [];

    // removing words with repeating letters
    for (let i = 0; i < allWords.length; i++) {
        const word = allWords[i];
        if (hasDuplicates(word)) {
            continue;
        }

        if (hasThreeVowels(word)) {
            continue;
        }

        usefulWords.push(word);
    }

    console.log(usefulWords.length, "words"); // 8072

    const words = removeAnagrams(usefulWords);
    console.log(words.length, "words without anagrams");

    // console.log("\n");
    for (let i = 0; i < 10; i++) {
        console.log(allWords[i]);
    }

    // a, b, c, d, e, f, g, h, i, j, k, l...
    console.log('Calculating common words');
    const commons = precalculateCommons(words);

    for (let i = 0; i < words.length; i++) {
        const words1 = words[i];
        console.log(i);

        for (let j = i + 1; j < words.length; j++) {
            const words2 = words[j];

            if (commons[i][j]) {
                continue;
            }

            for (let k = j + 1; k < words.length; k++) {
                const words3 = words[k];

                if (commons[j][k] || commons[i][k]) {
                    continue;
                }

                for (let m = k + 1; m < words.length; m++) {
                    const words4 = words[m];

                    if (
                        commons[k][m] ||
                        commons[j][m] ||
                        commons[i][m]
                    ) {
                        continue;
                    }

                    for (let n = m + 1; n < words.length; n++) {
                        const words5 = words[n];

                        if (
                            commons[m][n] ||
                            commons[k][n] ||
                            commons[j][n] ||
                            commons[i][n]
                        ) {
                            continue;
                        }

                        result.push([words1, words2, words3, words4, words5]);
                    }
                }
            }
        }
    }

    return result;
}

const combinations = solution();
console.log(combinations);


// [ 'bemix', 'clunk', 'grypt', 'vozhd', 'waqfs' ],
// [ 'bling', 'jumpy', 'treck', 'vozhd', 'waqfs' ],
// [ 'blonx', 'fritz', 'gyved', 'jacks', 'whump' ],
// [ 'blonx', 'fritz', 'gyved', 'jumps', 'whack' ],
// [ 'blunk', 'cimex', 'grypt', 'vozhd', 'waqfs' ],
// [ 'brick', 'glent', 'jumpy', 'vozhd', 'waqfs' ],
// [ 'brock', 'judge', 'miltz', 'phynx', 'waqfs' ],
// [ 'bruck', 'gizmo', 'phynx', 'veldt', 'waqfs' ],
// [ 'bruck', 'glent', 'jimpy', 'vozhd', 'waqfs' ],
// [ 'bruck', 'glitz', 'moved', 'phynx', 'waqfs' ],
// [ 'bruck', 'goved', 'miltz', 'phynx', 'waqfs' ],
// [ 'brung', 'kempt', 'vozhd', 'waqfs', 'xylic' ],
// [ 'chunk', 'fjord', 'gymps', 'vibex', 'waltz' ],
// [ 'clipt', 'jumby', 'kreng', 'vozhd', 'waqfs' ],
// [ 'cromb', 'gived', 'klutz', 'phynx', 'waqfs' ],
// [ 'cromb', 'glitz', 'juked', 'phynx', 'waqfs' ],
// [ 'cromb', 'jived', 'klutz', 'phynx', 'waqfs' ],
// [ 'crumb', 'glitz', 'joked', 'phynx', 'waqfs' ],
// [ 'dreck', 'glitz', 'jumbo', 'phynx', 'waqfs' ],
// [ 'fjord', 'glitz', 'phynx', 'quack', 'wembs' ],
// [ 'fjord', 'gucks', 'nymph', 'vibex', 'waltz' ],
// [ 'glent', 'jumby', 'prick', 'vozhd', 'waqfs' ],
// [ 'jumby', 'pling', 'treck', 'vozhd', 'waqfs' ]
