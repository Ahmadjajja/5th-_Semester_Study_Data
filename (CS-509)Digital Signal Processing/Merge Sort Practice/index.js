function MERGE_SORT(A, p, r) {
  if (p < r) {
    q = (p + r) / 2;
    MERGE_SORT(A, p, q); //sort A[p...q]
    MERGE_SORT(A, q + 1, r); //sort A[q+1...r]
    return MERGE(A, p, q, r); // merge the two pieces
  }
  return A[p];
}

function MERGE(A, p, q, r) {
  let B = A;
  let k = p; //  also k == p
  let i = k; // i == p
  let j = q + 1; // j == q + 1
  while (i <= q && j <= r) {
    if (A[i] <= A[j]) {
      B[k++] = A[i++]; //B[++k] == A[++i]
    } else {
      B[k++] == A[j++]; //B[++k] == A[++j]
    }
  }
  while (i <= q) {
    B[k++] = A[i++];
  }
  while (j <= r) {
    B[k++] = A[j++];
  }
  for (let i = p; i <= r; i++) {
    A[i] = B[i];
  }
  return A;
}

var arr = [7, 5, 2, 4, 1, 6, 3, 0];

// console.log(arr.length -1);

console.log(MERGE_SORT(arr, 0, arr.length - 1));
