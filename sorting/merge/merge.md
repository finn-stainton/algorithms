# Merge Sort

``` sudo
merge(A, q, p, r)
    n1 = q - p + 1
    n2 = r - q

    let L[1..n1+1] and R[1..n2+1] be new arrays

    for i = 1 to n
        L[i] = A[p + i - 1]
    
    for j = 1 to m
        R[j] = A[q + j]

    L[n + 1] = infinite
    R[m + 1] = infinite
    i = 1;
    j = 1;
    for k = p to r
        if L[i] <= R[j]
            A[k] = L[i]
            i = i + 1
        else A[k] = R[j]
            j = j + 1
```

``` sudo

```