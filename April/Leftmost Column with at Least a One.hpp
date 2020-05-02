int leftMostColumnWithOne(BinaryMatrix &binaryMatrix) {
        std::ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        
        int r = binaryMatrix.dimensions()[0];
        int c = binaryMatrix.dimensions()[1];
        
        if(r==0 or c==0) return -1;
        
        int i = 0;
        int j = c-1;
        
        while(i<r and j>=0)
        {
            if(binaryMatrix.get(i,j)==0)
                i++;
            else if(binaryMatrix.get(i,j)==1)
                j--;
        }
        if(j==c-1)
            return -1;
        else
            return j+1;
        
    }
