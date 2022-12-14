?? 
 / *   R T - T h r e a d   c o n f i g   f i l e   * /  
  
 # i f n d e f   _ _ R T T H R E A D _ C F G _ H _ _  
 # d e f i n e   _ _ R T T H R E A D _ C F G _ H _ _  
  
 / /   < < <   U s e   C o n f i g u r a t i o n   W i z a r d   i n   C o n t e x t   M e n u   > > >  
 / /   < h > B a s i c   C o n f i g u r a t i o n  
 / /   < o > M a x i m a l   l e v e l   o f   t h r e a d   p r i o r i t y   < 8 - 2 5 6 >  
 / /     < i > D e f a u l t :   3 2  
 # d e f i n e   R T _ T H R E A D _ P R I O R I T Y _ M A X   3 2  
  
 / /   < o > O S   t i c k   p e r   s e c o n d  
 / /     < i > D e f a u l t :   1 0 0 0       ( 1 m s )  
 # d e f i n e   R T _ T I C K _ P E R _ S E C O N D   1 0 0 0  
  
 / /   < o > A l i g n m e n t   s i z e   f o r   C P U   a r c h i t e c t u r e   d a t a   a c c e s s  
 / /     < i > D e f a u l t :   4  
 # d e f i n e   R T _ A L I G N _ S I Z E   4  
  
 / /   < o > t h e   m a x   l e n g t h   o f   o b j e c t   n a m e < 2 - 1 6 >  
 / /     < i > D e f a u l t :   8  
 # d e f i n e   R T _ N A M E _ M A X   8  
  
 / /   < c 1 > U s i n g   R T - T h r e a d   c o m p o n e n t s   i n i t i a l i z a t i o n  
 / /     < i > U s i n g   R T - T h r e a d   c o m p o n e n t s   i n i t i a l i z a t i o n  
 # d e f i n e   R T _ U S I N G _ C O M P O N E N T S _ I N I T  
 / /   < / c >  
  
 / /   < c 1 > U s i n g   u s e r   m a i n  
 / /     < i > U s i n g   u s e r   m a i n  
 # d e f i n e   R T _ U S I N G _ U S E R _ M A I N  
 / /   < / c >  
  
 / /   < o > t h e   s i z e   o f   m a i n   t h r e a d < 1 - 4 0 8 6 >  
 / /     < i > D e f a u l t :   5 1 2  
 # d e f i n e   R T _ M A I N _ T H R E A D _ S T A C K _ S I Z E   1 0 2 4  
 / /   < / h >  
  
 / /   < h > D e b u g   C o n f i g u r a t i o n  
 / /   < c 1 > e n a b l e   k e r n e l   d e b u g   c o n f i g u r a t i o n  
 / /     < i > D e f a u l t :   e n a b l e   k e r n e l   d e b u g   c o n f i g u r a t i o n  
 / / # d e f i n e   R T _ D E B U G  
 / /   < / c >  
  
 / /   < o > e n a b l e   c o m p o n e n t s   i n i t i a l i z a t i o n   d e b u g   c o n f i g u r a t i o n < 0 - 1 >  
 / /     < i > D e f a u l t :   0  
 # d e f i n e   R T _ D E B U G _ I N I T   0  
  
 / /   < c 1 > t h r e a d   s t a c k   o v e r   f l o w   d e t e c t  
 / /     < i >   D i a b l e   T h r e a d   s t a c k   o v e r   f l o w   d e t e c t  
 / / # d e f i n e   R T _ U S I N G _ O V E R F L O W _ C H E C K  
 / /   < / c >  
 / /   < / h >  
  
 / /   < h > H o o k   C o n f i g u r a t i o n  
 / /   < c 1 > u s i n g   h o o k  
 / /     < i > u s i n g   h o o k  
 / / # d e f i n e   R T _ U S I N G _ H O O K  
 / /   < / c >  
  
 / /   < c 1 > u s i n g   i d l e   h o o k  
 / /     < i > u s i n g   i d l e   h o o k  
 / / # d e f i n e   R T _ U S I N G _ I D L E _ H O O K  
 / /   < / c >  
 / /   < / h >  
  
 / /   < h > S o f t w a r e   t i m e r s   C o n f i g u r a t i o n  
 / /   < c 1 >   E n a b l e s   u s e r   t i m e r s  
 / /   < i >   E n a b l e s   u s e r   t i m e r s  
 / / # d e f i n e   R T _ U S I N G _ T I M E R _ S O F T  
 / /   < / c >  
  
 / /   < o > T h e   p r i o r i t y   l e v e l   o f   t i m e r   t h r e a d   < 0 - 3 1 >  
 / /     < i > D e f a u l t :   4  
 # d e f i n e   R T _ T I M E R _ T H R E A D _ P R I O   4  
  
 / /   < o > T h e   s t a c k   s i z e   o f   t i m e r   t h r e a d   < 0 - 8 1 9 2 >  
 / /     < i > D e f a u l t :   5 1 2  
 # d e f i n e   R T _ T I M E R _ T H R E A D _ S T A C K _ S I Z E   5 1 2  
 / /   < / h >  
  
 / /   < h > I P C ( I n t e r - p r o c e s s   c o m m u n i c a t i o n )   C o n f i g u r a t i o n  
 / /   < c 1 > U s i n g   S e m a p h o r e  
 / /     < i > U s i n g   S e m a p h o r e  
 # d e f i n e   R T _ U S I N G _ S E M A P H O R E  
 / /   < / c >  
  
 / /   < c 1 > U s i n g   M u t e x  
 / /     < i > U s i n g   M u t e x  
 / / # d e f i n e   R T _ U S I N G _ M U T E X  
 / /   < / c >  
  
 / /   < c 1 > U s i n g   E v e n t  
 / /     < i > U s i n g   E v e n t  
 / / # d e f i n e   R T _ U S I N G _ E V E N T  
 / /   < / c >  
  
 / /   < c 1 > U s i n g   M a i l B o x  
 / /     < i > U s i n g   M a i l B o x  
 / / # d e f i n e   R T _ U S I N G _ M A I L B O X  
 / /   < / c >  
  
 / /   < c 1 > U s i n g   M e s s a g e   Q u e u e  
 / /     < i > U s i n g   M e s s a g e   Q u e u e  
 / / # d e f i n e   R T _ U S I N G _ M E S S A G E Q U E U E  
 / /   < / c >  
 / /   < / h >  
  
 / /   < h > M e m o r y   M a n a g e m e n t   C o n f i g u r a t i o n  
 / /   < c 1 > U s i n g   M e m p o o l   M a n a g e m e n t  
 / /     < i > U s i n g   M e m p o o l   M a n a g e m e n t  
 / / # d e f i n e   R T _ U S I N G _ M E M P O O L  
 / /   < / c >  
 / /   < c 1 > D y n a m i c   H e a p   M a n a g e m e n t  
 / /     < i > D y n a m i c   H e a p   M a n a g e m e n t  
 / / # d e f i n e   R T _ U S I N G _ H E A P  
 / /   < / c >  
 / /   < c 1 > u s i n g   s m a l l   m e m o r y  
 / /     < i > u s i n g   s m a l l   m e m o r y  
 # d e f i n e   R T _ U S I N G _ S M A L L _ M E M  
 / /   < / c >  
  
 / /   < c 1 > u s i n g   t i n y   s i z e   o f   m e m o r y  
 / /     < i > u s i n g   t i n y   s i z e   o f   m e m o r y  
 / / # d e f i n e   R T _ U S I N G _ T I N Y _ S I Z E  
 / /   < / c >  
 / /   < / h >  
  
 / /   < h > C o n s o l e   C o n f i g u r a t i o n  
 / /   < c 1 > U s i n g   c o n s o l e  
 / /     < i > U s i n g   c o n s o l e  
 # d e f i n e   R T _ U S I N G _ C O N S O L E  
 / /   < / c >  
  
 / /   < o > t h e   b u f f e r   s i z e   o f   c o n s o l e   < 1 - 1 0 2 4 >  
 / /     < i > t h e   b u f f e r   s i z e   o f   c o n s o l e  
 / /     < i > D e f a u l t :   1 2 8     ( 1 2 8 B y t e )  
 # d e f i n e   R T _ C O N S O L E B U F _ S I Z E   1 2 8  
 / /   < / h >  
  
 / /   < h > E n a b l e   F i n S H   C o n f i g u r a t i o n  
 / /   < c 1 > i n c l u d e   s h e l l   c o n f i g  
 / /     < i >   S e l e c t   t h i s   c h o i c e   i f   y o u   u s i n g   F i n S H  
 / / # i n c l u d e   " f i n s h _ c o n f i g . h "  
 / /   < / c >  
 / /   < / h >  
  
 / /   < h > D e v i c e   C o n f i g u r a t i o n  
 / /   < c 1 > u s i n g   d e v i c e   f r a m e w o r k  
 / /     < i > u s i n g   d e v i c e   f r a m e w o r k  
 / / # d e f i n e   R T _ U S I N G _ D E V I C E  
 / /   < / c >  
 / /   < / h >  
  
 / /   < < <   e n d   o f   c o n f i g u r a t i o n   s e c t i o n   > > >  
  
 # e n d i f  
  