??/ * *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ f i l e         s t m 3 2 f 1 x x _ h a l _ r t c . c  
     *   @ a u t h o r     M C D   A p p l i c a t i o n   T e a m  
     *   @ b r i e f       R T C   H A L   m o d u l e   d r i v e r .  
     *                     T h i s   f i l e   p r o v i d e s   f i r m w a r e   f u n c t i o n s   t o   m a n a g e   t h e   f o l l o w i n g  
     *                     f u n c t i o n a l i t i e s   o f   t h e   R e a l   T i m e   C l o c k   ( R T C )   p e r i p h e r a l :  
     *                       +   I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n s  
     *                       +   R T C   T i m e   a n d   D a t e   f u n c t i o n s  
     *                       +   R T C   A l a r m   f u n c t i o n s  
     *                       +   P e r i p h e r a l   C o n t r o l   f u n c t i o n s  
     *                       +   P e r i p h e r a l   S t a t e   f u n c t i o n s  
     *  
     @ v e r b a t i m  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                     # # # # #   H o w   t o   u s e   t h i s   d r i v e r   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
     [ . . ]  
         ( + )   E n a b l e   t h e   R T C   d o m a i n   a c c e s s   ( s e e   d e s c r i p t i o n   i n   t h e   s e c t i o n   a b o v e ) .  
         ( + )   C o n f i g u r e   t h e   R T C   P r e s c a l e r   ( A s y n c h r o n o u s   p r e s c a l e r   t o   g e n e r a t e   R T C   1 H z   t i m e   b a s e )  
                 u s i n g   t h e   H A L _ R T C _ I n i t ( )   f u n c t i o n .  
  
     * * *   T i m e   a n d   D a t e   c o n f i g u r a t i o n   * * *  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
     [ . . ]  
         ( + )   T o   c o n f i g u r e   t h e   R T C   C a l e n d a r   ( T i m e   a n d   D a t e )   u s e   t h e   H A L _ R T C _ S e t T i m e ( )  
                 a n d   H A L _ R T C _ S e t D a t e ( )   f u n c t i o n s .  
         ( + )   T o   r e a d   t h e   R T C   C a l e n d a r ,   u s e   t h e   H A L _ R T C _ G e t T i m e ( )   a n d   H A L _ R T C _ G e t D a t e ( )   f u n c t i o n s .  
  
     * * *   A l a r m   c o n f i g u r a t i o n   * * *  
     = = = = = = = = = = = = = = = = = = = = = = = = = = =  
     [ . . ]  
         ( + )   T o   c o n f i g u r e   t h e   R T C   A l a r m   u s e   t h e   H A L _ R T C _ S e t A l a r m ( )   f u n c t i o n .  
                 Y o u   c a n   a l s o   c o n f i g u r e   t h e   R T C   A l a r m   w i t h   i n t e r r u p t   m o d e   u s i n g   t h e   H A L _ R T C _ S e t A l a r m _ I T ( )   f u n c t i o n .  
         ( + )   T o   r e a d   t h e   R T C   A l a r m ,   u s e   t h e   H A L _ R T C _ G e t A l a r m ( )   f u n c t i o n .  
  
     * * *   T a m p e r   c o n f i g u r a t i o n   * * *  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
     [ . . ]  
         ( + )   E n a b l e   t h e   R T C   T a m p e r   a n d   c o n f i g u r e   t h e   T a m p e r   L e v e l   u s i n g   t h e  
                 H A L _ R T C E x _ S e t T a m p e r ( )   f u n c t i o n .   Y o u   c a n   c o n f i g u r e   R T C   T a m p e r   w i t h   i n t e r r u p t  
                 m o d e   u s i n g   H A L _ R T C E x _ S e t T a m p e r _ I T ( )   f u n c t i o n .  
         ( + )   T h e   T A M P E R 1   a l t e r n a t e   f u n c t i o n   c a n   b e   m a p p e d   t o   P C 1 3  
  
     * * *   B a c k u p   D a t a   R e g i s t e r s   c o n f i g u r a t i o n   * * *  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
     [ . . ]  
         ( + )   T o   w r i t e   t o   t h e   R T C   B a c k u p   D a t a   r e g i s t e r s ,   u s e   t h e   H A L _ R T C E x _ B K U P W r i t e ( )  
                 f u n c t i o n .  
         ( + )   T o   r e a d   t h e   R T C   B a c k u p   D a t a   r e g i s t e r s ,   u s e   t h e   H A L _ R T C E x _ B K U P R e a d ( )  
                 f u n c t i o n .  
  
                                     # # # # #   W A R N I N G :   D r i v e r s   R e s t r i c t i o n s     # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
     [ . . ]   R T C   v e r s i o n   u s e d   o n   S T M 3 2 F 1   f a m i l i e s   i s   v e r s i o n   V 1 .   A l l   t h e   f e a t u r e s   s u p p o r t e d   b y   V 2  
               ( o t h e r   f a m i l i e s )   w i l l   b e   n o t   s u p p o r t e d   o n   F 1 .  
     [ . . ]   A s   o n   V 2 ,   m a i n   R T C   f e a t u r e s   a r e   m a n a g e d   b y   H W .   B u t   o n   F 1 ,   d a t e   f e a t u r e   i s   c o m p l e t e l y  
               m a n a g e d   b y   S W .  
     [ . . ]   T h e n ,   t h e r e   a r e   s o m e   r e s t r i c t i o n s   c o m p a r e d   t o   o t h e r   f a m i l i e s :  
         ( + )   O n l y   f o r m a t   2 4   h o u r s   s u p p o r t e d   i n   H A L   ( f o r m a t   1 2   h o u r s   n o t   s u p p o r t e d )  
         ( + )   D a t e   i s   s a v e d   i n   S R A M .   T h e n ,   w h e n   M C U   i s   i n   S T O P   o r   S T A N D B Y   m o d e ,   d a t e   w i l l   b e   l o s t .  
                 U s e r   s h o u l d   i m p l e m e n t   a   w a y   t o   s a v e   d a t e   b e f o r e   e n t e r i n g   i n   l o w   p o w e r   m o d e   ( a n  
                 e x a m p l e   i s   p r o v i d e d   w i t h   f i r m w a r e   p a c k a g e   b a s e d   o n   b a c k u p   r e g i s t e r s )  
         ( + )   D a t e   i s   a u t o m a t i c a l l y   u p d a t e d   e a c h   t i m e   a   H A L _ R T C _ G e t T i m e   o r   H A L _ R T C _ G e t D a t e   i s   c a l l e d .  
         ( + )   A l a r m   d e t e c t i o n   i s   l i m i t e d   t o   1   d a y .   I t   w i l l   e x p i r e   o n l y   1   t i m e   ( n o   a l a r m   r e p e t i t i o n ,   n e e d  
                 t o   p r o g r a m   a   n e w   a l a r m )  
  
                             # # # # #   B a c k u p   D o m a i n   O p e r a t i n g   C o n d i t i o n   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
     [ . . ]   T h e   r e a l - t i m e   c l o c k   ( R T C )   a n d   t h e   R T C   b a c k u p   r e g i s t e r s   c a n   b e   p o w e r e d  
               f r o m   t h e   V B A T   v o l t a g e   w h e n   t h e   m a i n   V D D   s u p p l y   i s   p o w e r e d   o f f .  
               T o   r e t a i n   t h e   c o n t e n t   o f   t h e   R T C   b a c k u p   r e g i s t e r s   a n d   s u p p l y   t h e   R T C  
               w h e n   V D D   i s   t u r n e d   o f f ,   V B A T   p i n   c a n   b e   c o n n e c t e d   t o   a n   o p t i o n a l  
               s t a n d b y   v o l t a g e   s u p p l i e d   b y   a   b a t t e r y   o r   b y   a n o t h e r   s o u r c e .  
  
     [ . . ]   T o   a l l o w   t h e   R T C   o p e r a t i n g   e v e n   w h e n   t h e   m a i n   d i g i t a l   s u p p l y   ( V D D )   i s   t u r n e d  
               o f f ,   t h e   V B A T   p i n   p o w e r s   t h e   f o l l o w i n g   b l o c k s :  
         ( # )   T h e   R T C  
         ( # )   T h e   L S E   o s c i l l a t o r  
         ( # )   T h e   b a c k u p   S R A M   w h e n   t h e   l o w   p o w e r   b a c k u p   r e g u l a t o r   i s   e n a b l e d  
         ( # )   P C 1 3   t o   P C 1 5   I / O s ,   p l u s   P I 8   I / O   ( w h e n   a v a i l a b l e )  
  
     [ . . ]   W h e n   t h e   b a c k u p   d o m a i n   i s   s u p p l i e d   b y   V D D   ( a n a l o g   s w i t c h   c o n n e c t e d   t o   V D D ) ,  
               t h e   f o l l o w i n g   p i n s   a r e   a v a i l a b l e :  
         ( + )   P C 1 3   c a n   b e   u s e d   a s   a   T a m p e r   p i n  
  
     [ . . ]   W h e n   t h e   b a c k u p   d o m a i n   i s   s u p p l i e d   b y   V B A T   ( a n a l o g   s w i t c h   c o n n e c t e d   t o   V B A T  
               b e c a u s e   V D D   i s   n o t   p r e s e n t ) ,   t h e   f o l l o w i n g   p i n s   a r e   a v a i l a b l e :  
         ( + )   P C 1 3   c a n   b e   u s e d   a s   t h e   T a m p e r   p i n  
  
                                       # # # # #   B a c k u p   D o m a i n   R e s e t   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
     [ . . ]   T h e   b a c k u p   d o m a i n   r e s e t   s e t s   a l l   R T C   r e g i s t e r s   a n d   t h e   R C C _ B D C R   r e g i s t e r  
               t o   t h e i r   r e s e t   v a l u e s .  
     [ . . ]   A   b a c k u p   d o m a i n   r e s e t   i s   g e n e r a t e d   w h e n   o n e   o f   t h e   f o l l o w i n g   e v e n t s   o c c u r s :  
         ( # )   S o f t w a r e   r e s e t ,   t r i g g e r e d   b y   s e t t i n g   t h e   B D R S T   b i t   i n   t h e  
                 R C C   B a c k u p   d o m a i n   c o n t r o l   r e g i s t e r   ( R C C _ B D C R ) .  
         ( # )   V D D   o r   V B A T   p o w e r   o n ,   i f   b o t h   s u p p l i e s   h a v e   p r e v i o u s l y   b e e n   p o w e r e d   o f f .  
         ( # )   T a m p e r   d e t e c t i o n   e v e n t   r e s e t s   a l l   d a t a   b a c k u p   r e g i s t e r s .  
  
                                       # # # # #   B a c k u p   D o m a i n   A c c e s s   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
     [ . . ]   A f t e r   r e s e t ,   t h e   b a c k u p   d o m a i n   ( R T C   r e g i s t e r s ,   R T C   b a c k u p   d a t a  
               r e g i s t e r s   a n d   b a c k u p   S R A M )   i s   p r o t e c t e d   a g a i n s t   p o s s i b l e   u n w a n t e d   w r i t e  
               a c c e s s e s .  
     [ . . ]   T o   e n a b l e   a c c e s s   t o   t h e   R T C   D o m a i n   a n d   R T C   r e g i s t e r s ,   p r o c e e d   a s   f o l l o w s :  
         ( + )   C a l l   t h e   f u n c t i o n   H A L _ R C C E x _ P e r i p h C L K C o n f i g   i n   u s i n g   R C C _ P E R I P H C L K _ R T C   f o r  
                 P e r i p h C l o c k S e l e c t i o n   a n d   s e l e c t   R T C C l o c k S e l e c t i o n   ( L S E ,   L S I   o r   H S E )  
         ( + )   E n a b l e   t h e   B K P   c l o c k   i n   u s i n g   _ _ H A L _ R C C _ B K P _ C L K _ E N A B L E ( )  
  
                                     # # # # #   R T C   a n d   l o w   p o w e r   m o d e s   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
     [ . . ]   T h e   M C U   c a n   b e   w o k e n   u p   f r o m   a   l o w   p o w e r   m o d e   b y   a n   R T C   a l t e r n a t e  
               f u n c t i o n .  
     [ . . ]   T h e   R T C   a l t e r n a t e   f u n c t i o n s   a r e   t h e   R T C   a l a r m s   ( A l a r m   A ) ,  
               a n d   R T C   t a m p e r   e v e n t   d e t e c t i o n .  
               T h e s e   R T C   a l t e r n a t e   f u n c t i o n s   c a n   w a k e   u p   t h e   s y s t e m   f r o m   t h e   S t o p   a n d  
               S t a n d b y   l o w   p o w e r   m o d e s .  
     [ . . ]   T h e   s y s t e m   c a n   a l s o   w a k e   u p   f r o m   l o w   p o w e r   m o d e s   w i t h o u t   d e p e n d i n g  
               o n   a n   e x t e r n a l   i n t e r r u p t   ( A u t o - w a k e u p   m o d e ) ,   b y   u s i n g   t h e   R T C   a l a r m .  
  
     * * *   C a l l b a c k   r e g i s t r a t i o n   * * *  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
     [ . . ]  
     T h e   c o m p i l a t i o n   d e f i n e     U S E _ H A L _ R T C _ R E G I S T E R _ C A L L B A C K S   w h e n   s e t   t o   1  
     a l l o w s   t h e   u s e r   t o   c o n f i g u r e   d y n a m i c a l l y   t h e   d r i v e r   c a l l b a c k s .  
     U s e   F u n c t i o n   @ r e f   H A L _ R T C _ R e g i s t e r C a l l b a c k ( )   t o   r e g i s t e r   a n   i n t e r r u p t   c a l l b a c k .  
      
     [ . . ]  
     F u n c t i o n   @ r e f   H A L _ R T C _ R e g i s t e r C a l l b a c k ( )   a l l o w s   t o   r e g i s t e r   f o l l o w i n g   c a l l b a c k s :  
         ( + )   A l a r m A E v e n t C a l l b a c k                     :   R T C   A l a r m   A   E v e n t   c a l l b a c k .  
         ( + )   T a m p e r 1 E v e n t C a l l b a c k                   :   R T C   T a m p e r   1   E v e n t   c a l l b a c k .  
         ( + )   M s p I n i t C a l l b a c k                             :   R T C   M s p I n i t   c a l l b a c k .  
         ( + )   M s p D e I n i t C a l l b a c k                         :   R T C   M s p D e I n i t   c a l l b a c k .  
     [ . . ] 	      
     T h i s   f u n c t i o n   t a k e s   a s   p a r a m e t e r s   t h e   H A L   p e r i p h e r a l   h a n d l e ,   t h e   C a l l b a c k   I D  
     a n d   a   p o i n t e r   t o   t h e   u s e r   c a l l b a c k   f u n c t i o n .  
      
     [ . . ]  
     U s e   f u n c t i o n   @ r e f   H A L _ R T C _ U n R e g i s t e r C a l l b a c k ( )   t o   r e s e t   a   c a l l b a c k   t o   t h e   d e f a u l t  
     w e a k   f u n c t i o n .  
     @ r e f   H A L _ R T C _ U n R e g i s t e r C a l l b a c k ( )   t a k e s   a s   p a r a m e t e r s   t h e   H A L   p e r i p h e r a l   h a n d l e ,  
     a n d   t h e   C a l l b a c k   I D .  
     T h i s   f u n c t i o n   a l l o w s   t o   r e s e t   f o l l o w i n g   c a l l b a c k s :  
         ( + )   A l a r m A E v e n t C a l l b a c k                     :   R T C   A l a r m   A   E v e n t   c a l l b a c k .  
         ( + )   T a m p e r 1 E v e n t C a l l b a c k                   :   R T C   T a m p e r   1   E v e n t   c a l l b a c k .  
         ( + )   M s p I n i t C a l l b a c k                             :   R T C   M s p I n i t   c a l l b a c k .  
         ( + )   M s p D e I n i t C a l l b a c k                         :   R T C   M s p D e I n i t   c a l l b a c k .  
     [ . . ]  
     B y   d e f a u l t ,   a f t e r   t h e   @ r e f   H A L _ R T C _ I n i t ( )   a n d   w h e n   t h e   s t a t e   i s   H A L _ R T C _ S T A T E _ R E S E T ,  
     a l l   c a l l b a c k s   a r e   s e t   t o   t h e   c o r r e s p o n d i n g   w e a k   f u n c t i o n s   :  
     e x a m p l e   @ r e f   A l a r m A E v e n t C a l l b a c k ( ) .  
     E x c e p t i o n   d o n e   f o r   M s p I n i t   a n d   M s p D e I n i t   c a l l b a c k s   t h a t   a r e   r e s e t   t o   t h e   l e g a c y   w e a k   f u n c t i o n  
     i n   t h e   @ r e f   H A L _ R T C _ I n i t ( ) / @ r e f   H A L _ R T C _ D e I n i t ( )   o n l y   w h e n   t h e s e   c a l l b a c k s   a r e   n u l l  
     ( n o t   r e g i s t e r e d   b e f o r e h a n d ) .  
     I f   n o t ,   M s p I n i t   o r   M s p D e I n i t   a r e   n o t   n u l l ,   @ r e f   H A L _ R T C _ I n i t ( ) / @ r e f   H A L _ R T C _ D e I n i t ( )  
     k e e p   a n d   u s e   t h e   u s e r   M s p I n i t / M s p D e I n i t   c a l l b a c k s   ( r e g i s t e r e d   b e f o r e h a n d )  
     [ . . ]  
     C a l l b a c k s   c a n   b e   r e g i s t e r e d / u n r e g i s t e r e d   i n   H A L _ R T C _ S T A T E _ R E A D Y   s t a t e   o n l y .  
     E x c e p t i o n   d o n e   M s p I n i t / M s p D e I n i t   t h a t   c a n   b e   r e g i s t e r e d / u n r e g i s t e r e d  
     i n   H A L _ R T C _ S T A T E _ R E A D Y   o r   H A L _ R T C _ S T A T E _ R E S E T   s t a t e ,  
     t h u s   r e g i s t e r e d   ( u s e r )   M s p I n i t / D e I n i t   c a l l b a c k s   c a n   b e   u s e d   d u r i n g   t h e   I n i t / D e I n i t .  
     I n   t h a t   c a s e   f i r s t   r e g i s t e r   t h e   M s p I n i t / M s p D e I n i t   u s e r   c a l l b a c k s  
     u s i n g   @ r e f   H A L _ R T C _ R e g i s t e r C a l l b a c k ( )   b e f o r e   c a l l i n g   @ r e f   H A L _ R T C _ D e I n i t ( )  
     o r   @ r e f   H A L _ R T C _ I n i t ( )   f u n c t i o n .  
     [ . . ]  
     W h e n   T h e   c o m p i l a t i o n   d e f i n e   U S E _ H A L _ R T C _ R E G I S T E R _ C A L L B A C K S   i s   s e t   t o   0   o r  
     n o t   d e f i n e d ,   t h e   c a l l b a c k   r e g i s t r a t i o n   f e a t u r e   i s   n o t   a v a i l a b l e   a n d   a l l   c a l l b a c k s  
     a r e   s e t   t o   t h e   c o r r e s p o n d i n g   w e a k   f u n c t i o n s .  
       @ e n d v e r b a t i m  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ a t t e n t i o n  
     *  
     *   < h 2 > < c e n t e r > & c o p y ;   C o p y r i g h t   ( c )   2 0 1 6   S T M i c r o e l e c t r o n i c s .  
     *   A l l   r i g h t s   r e s e r v e d . < / c e n t e r > < / h 2 >  
     *  
     *   T h i s   s o f t w a r e   c o m p o n e n t   i s   l i c e n s e d   b y   S T   u n d e r   B S D   3 - C l a u s e   l i c e n s e ,  
     *   t h e   " L i c e n s e " ;   Y o u   m a y   n o t   u s e   t h i s   f i l e   e x c e p t   i n   c o m p l i a n c e   w i t h   t h e  
     *   L i c e n s e .   Y o u   m a y   o b t a i n   a   c o p y   o f   t h e   L i c e n s e   a t :  
     *                                                 o p e n s o u r c e . o r g / l i c e n s e s / B S D - 3 - C l a u s e  
     *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     * /  
  
 / *   I n c l u d e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 # i n c l u d e   " s t m 3 2 f 1 x x _ h a l . h "  
  
 / * *   @ a d d t o g r o u p   S T M 3 2 F 1 x x _ H A L _ D r i v e r  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   R T C   R T C  
     *   @ b r i e f   R T C   H A L   m o d u l e   d r i v e r  
     *   @ {  
     * /  
  
 # i f d e f   H A L _ R T C _ M O D U L E _ E N A B L E D  
  
 / *   P r i v a t e   t y p e d e f   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   d e f i n e   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   R T C _ P r i v a t e _ C o n s t a n t s   R T C   P r i v a t e   C o n s t a n t s  
     *   @ {  
     * /  
 # d e f i n e   R T C _ A L A R M _ R E S E T V A L U E _ R E G I S T E R         ( u i n t 1 6 _ t ) 0 x F F F F  
 # d e f i n e   R T C _ A L A R M _ R E S E T V A L U E                           0 x F F F F F F F F U  
  
 / * *  
     *   @ }  
     * /  
  
 / *   P r i v a t e   m a c r o   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   R T C _ P r i v a t e _ M a c r o s   R T C   P r i v a t e   M a c r o s  
     *   @ {  
     * /  
 / * *  
     *   @ }  
     * /  
  
 / *   P r i v a t e   v a r i a b l e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   f u n c t i o n   p r o t o t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   R T C _ P r i v a t e _ F u n c t i o n s   R T C   P r i v a t e   F u n c t i o n s  
     *   @ {  
     * /  
 s t a t i c   u i n t 3 2 _ t                       R T C _ R e a d T i m e C o u n t e r ( R T C _ H a n d l e T y p e D e f   * h r t c ) ;  
 s t a t i c   H A L _ S t a t u s T y p e D e f     R T C _ W r i t e T i m e C o u n t e r ( R T C _ H a n d l e T y p e D e f   * h r t c ,   u i n t 3 2 _ t   T i m e C o u n t e r ) ;  
 s t a t i c   u i n t 3 2 _ t                       R T C _ R e a d A l a r m C o u n t e r ( R T C _ H a n d l e T y p e D e f   * h r t c ) ;  
 s t a t i c   H A L _ S t a t u s T y p e D e f     R T C _ W r i t e A l a r m C o u n t e r ( R T C _ H a n d l e T y p e D e f   * h r t c ,   u i n t 3 2 _ t   A l a r m C o u n t e r ) ;  
 s t a t i c   H A L _ S t a t u s T y p e D e f     R T C _ E n t e r I n i t M o d e ( R T C _ H a n d l e T y p e D e f   * h r t c ) ;  
 s t a t i c   H A L _ S t a t u s T y p e D e f     R T C _ E x i t I n i t M o d e ( R T C _ H a n d l e T y p e D e f   * h r t c ) ;  
 s t a t i c   u i n t 8 _ t                         R T C _ B y t e T o B c d 2 ( u i n t 8 _ t   V a l u e ) ;  
 s t a t i c   u i n t 8 _ t                         R T C _ B c d 2 T o B y t e ( u i n t 8 _ t   V a l u e ) ;  
 s t a t i c   u i n t 8 _ t                         R T C _ I s L e a p Y e a r ( u i n t 1 6 _ t   n Y e a r ) ;  
 s t a t i c   v o i d                               R T C _ D a t e U p d a t e ( R T C _ H a n d l e T y p e D e f   * h r t c ,   u i n t 3 2 _ t   D a y E l a p s e d ) ;  
 s t a t i c   u i n t 8 _ t                         R T C _ W e e k D a y N u m ( u i n t 3 2 _ t   n Y e a r ,   u i n t 8 _ t   n M o n t h ,   u i n t 8 _ t   n D a y ) ;  
  
 / * *  
     *   @ }  
     * /  
  
 / *   P r i v a t e   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   R T C _ E x p o r t e d _ F u n c t i o n s   R T C   E x p o r t e d   F u n c t i o n s  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   R T C _ E x p o r t e d _ F u n c t i o n s _ G r o u p 1   I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n s  
   *     @ b r i e f         I n i t i a l i z a t i o n   a n d   C o n f i g u r a t i o n   f u n c t i o n s  
   *  
 @ v e r b a t i m  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                             # # # # #   I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n s   # # # # #  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
       [ . . ]   T h i s   s e c t i o n   p r o v i d e s   f u n c t i o n s   a l l o w i n g   t o   i n i t i a l i z e   a n d   c o n f i g u r e   t h e  
                   R T C   P r e s c a l e r   ( A s y n c h r o n o u s ) ,   d i s a b l e   R T C   r e g i s t e r s   W r i t e   p r o t e c t i o n ,  
                   e n t e r   a n d   e x i t   t h e   R T C   i n i t i a l i z a t i o n   m o d e ,  
                   R T C   r e g i s t e r s   s y n c h r o n i z a t i o n   c h e c k   a n d   r e f e r e n c e   c l o c k   d e t e c t i o n   e n a b l e .  
                   ( # )   T h e   R T C   P r e s c a l e r   s h o u l d   b e   p r o g r a m m e d   t o   g e n e r a t e   t h e   R T C   1 H z   t i m e   b a s e .  
                   ( # )   A l l   R T C   r e g i s t e r s   a r e   W r i t e   p r o t e c t e d .   W r i t i n g   t o   t h e   R T C   r e g i s t e r s  
                           i s   e n a b l e d   b y   s e t t i n g   t h e   C N F   b i t   i n   t h e   R T C _ C R L   r e g i s t e r .  
                   ( # )   T o   r e a d   t h e   c a l e n d a r   a f t e r   w a k e u p   f r o m   l o w   p o w e r   m o d e s   ( S t a n d b y   o r   S t o p )  
                           t h e   s o f t w a r e   m u s t   f i r s t   w a i t   f o r   t h e   R S F   b i t   ( R e g i s t e r   S y n c h r o n i z e d   F l a g )  
                           i n   t h e   R T C _ C R L   r e g i s t e r   t o   b e   s e t   b y   h a r d w a r e .  
                           T h e   H A L _ R T C _ W a i t F o r S y n c h r o ( )   f u n c t i o n   i m p l e m e n t s   t h e   a b o v e   s o f t w a r e  
                           s e q u e n c e   ( R S F   c l e a r   a n d   R S F   c h e c k ) .  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     I n i t i a l i z e s   t h e   R T C   p e r i p h e r a l  
     *   @ p a r a m     h r t c       p o i n t e r   t o   a   R T C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   R T C .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ R T C _ I n i t ( R T C _ H a n d l e T y p e D e f   * h r t c )  
 {  
     u i n t 3 2 _ t   p r e s c a l e r   =   0 U ;  
     / *   C h e c k   i n p u t   p a r a m e t e r s   * /  
     i f   ( h r t c   = =   N U L L )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ R T C _ A L L _ I N S T A N C E ( h r t c - > I n s t a n c e ) ) ;  
     a s s e r t _ p a r a m ( I S _ R T C _ C A L I B _ O U T P U T ( h r t c - > I n i t . O u t P u t ) ) ;  
     a s s e r t _ p a r a m ( I S _ R T C _ A S Y N C H _ P R E D I V ( h r t c - > I n i t . A s y n c h P r e d i v ) ) ;  
  
 # i f   ( U S E _ H A L _ R T C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
     i f   ( h r t c - > S t a t e   = =   H A L _ R T C _ S T A T E _ R E S E T )  
     {  
         / *   A l l o c a t e   l o c k   r e s o u r c e   a n d   i n i t i a l i z e   i t   * /  
         h r t c - > L o c k   =   H A L _ U N L O C K E D ;  
  
         h r t c - > A l a r m A E v e n t C a l l b a c k                     =     H A L _ R T C _ A l a r m A E v e n t C a l l b a c k ;                 / *   L e g a c y   w e a k   A l a r m A E v e n t C a l l b a c k             * /  
         h r t c - > T a m p e r 1 E v e n t C a l l b a c k                   =     H A L _ R T C E x _ T a m p e r 1 E v e n t C a l l b a c k ;           / *   L e g a c y   w e a k   T a m p e r 1 E v e n t C a l l b a c k           * /  
  
         i f   ( h r t c - > M s p I n i t C a l l b a c k   = =   N U L L )  
         {  
             h r t c - > M s p I n i t C a l l b a c k   =   H A L _ R T C _ M s p I n i t ;  
         }  
         / *   I n i t   t h e   l o w   l e v e l   h a r d w a r e   * /  
         h r t c - > M s p I n i t C a l l b a c k ( h r t c ) ;  
  
         i f   ( h r t c - > M s p D e I n i t C a l l b a c k   = =   N U L L )  
         {  
             h r t c - > M s p D e I n i t C a l l b a c k   =   H A L _ R T C _ M s p D e I n i t ;  
         }  
     }  
 # e l s e  
     i f   ( h r t c - > S t a t e   = =   H A L _ R T C _ S T A T E _ R E S E T )  
     {  
         / *   A l l o c a t e   l o c k   r e s o u r c e   a n d   i n i t i a l i z e   i t   * /  
         h r t c - > L o c k   =   H A L _ U N L O C K E D ;  
  
         / *   I n i t i a l i z e   R T C   M S P   * /  
         H A L _ R T C _ M s p I n i t ( h r t c ) ;  
     }  
 # e n d i f   / *   ( U S E _ H A L _ R T C _ R E G I S T E R _ C A L L B A C K S )   * /  
  
     / *   S e t   R T C   s t a t e   * /  
     h r t c - > S t a t e   =   H A L _ R T C _ S T A T E _ B U S Y ;  
  
     / *   W a i t i n g   f o r   s y n c h r o   * /  
     i f   ( H A L _ R T C _ W a i t F o r S y n c h r o ( h r t c )   ! =   H A L _ O K )  
     {  
         / *   S e t   R T C   s t a t e   * /  
         h r t c - > S t a t e   =   H A L _ R T C _ S T A T E _ E R R O R ;  
  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     / *   S e t   I n i t i a l i z a t i o n   m o d e   * /  
     i f   ( R T C _ E n t e r I n i t M o d e ( h r t c )   ! =   H A L _ O K )  
     {  
         / *   S e t   R T C   s t a t e   * /  
         h r t c - > S t a t e   =   H A L _ R T C _ S T A T E _ E R R O R ;  
  
         r e t u r n   H A L _ E R R O R ;  
     }  
     e l s e  
     {  
         / *   C l e a r   F l a g s   B i t s   * /  
         C L E A R _ B I T ( h r t c - > I n s t a n c e - > C R L ,   ( R T C _ F L A G _ O W   |   R T C _ F L A G _ A L R A F   |   R T C _ F L A G _ S E C ) ) ;  
  
         i f   ( h r t c - > I n i t . O u t P u t   ! =   R T C _ O U T P U T S O U R C E _ N O N E )  
         {  
             / *   D i s a b l e   t h e   s e l e c t e d   T a m p e r   p i n   * /  
             C L E A R _ B I T ( B K P - > C R ,   B K P _ C R _ T P E ) ;  
         }  
  
         / *   S e t   t h e   s i g n a l   w h i c h   w i l l   b e   r o u t e d   t o   R T C   T a m p e r   p i n * /  
         M O D I F Y _ R E G ( B K P - > R T C C R ,   ( B K P _ R T C C R _ C C O   |   B K P _ R T C C R _ A S O E   |   B K P _ R T C C R _ A S O S ) ,   h r t c - > I n i t . O u t P u t ) ;  
  
         i f   ( h r t c - > I n i t . A s y n c h P r e d i v   ! =   R T C _ A U T O _ 1 _ S E C O N D )  
         {  
             / *   R T C   P r e s c a l e r   p r o v i d e d   d i r e c t l y   b y   e n d - u s e r * /  
             p r e s c a l e r   =   h r t c - > I n i t . A s y n c h P r e d i v ;  
         }  
         e l s e  
         {  
             / *   R T C   P r e s c a l e r   w i l l   b e   a u t o m a t i c a l l y   c a l c u l a t e d   t o   g e t   1   s e c o n d   t i m e b a s e   * /  
             / *   G e t   t h e   R T C C L K   f r e q u e n c y   * /  
             p r e s c a l e r   =   H A L _ R C C E x _ G e t P e r i p h C L K F r e q ( R C C _ P E R I P H C L K _ R T C ) ;  
  
             / *   C h e c k   t h a t   R T C   c l o c k   i s   e n a b l e d * /  
             i f   ( p r e s c a l e r   = =   0 U )  
             {  
                 / *   S h o u l d   n o t   h a p p e n .   F r e q u e n c y   i s   n o t   a v a i l a b l e * /  
                 h r t c - > S t a t e   =   H A L _ R T C _ S T A T E _ E R R O R ;  
                 r e t u r n   H A L _ E R R O R ;  
             }  
             e l s e  
             {  
                 / *   R T C   p e r i o d   =   R T C C L K / ( R T C _ P R   +   1 )   * /  
                 p r e s c a l e r   =   p r e s c a l e r   -   1 U ;  
             }  
         }  
  
         / *   C o n f i g u r e   t h e   R T C _ P R L H   /   R T C _ P R L L   * /  
         M O D I F Y _ R E G ( h r t c - > I n s t a n c e - > P R L H ,   R T C _ P R L H _ P R L ,   ( p r e s c a l e r   > >   1 6 U ) ) ;  
         M O D I F Y _ R E G ( h r t c - > I n s t a n c e - > P R L L ,   R T C _ P R L L _ P R L ,   ( p r e s c a l e r   &   R T C _ P R L L _ P R L ) ) ;  
  
         / *   W a i t   f o r   s y n c h r o   * /  
         i f   ( R T C _ E x i t I n i t M o d e ( h r t c )   ! =   H A L _ O K )  
         {  
             h r t c - > S t a t e   =   H A L _ R T C _ S T A T E _ E R R O R ;  
  
             r e t u r n   H A L _ E R R O R ;  
         }  
  
         / *   I n i t i a l i z e   d a t e   t o   1 s t   o f   J a n u a r y   2 0 0 0   * /  
         h r t c - > D a t e T o U p d a t e . Y e a r   =   0 x 0 0 U ;  
         h r t c - > D a t e T o U p d a t e . M o n t h   =   R T C _ M O N T H _ J A N U A R Y ;  
         h r t c - > D a t e T o U p d a t e . D a t e   =   0 x 0 1 U ;  
  
         / *   S e t   R T C   s t a t e   * /  
         h r t c - > S t a t e   =   H A L _ R T C _ S T A T E _ R E A D Y ;  
  
         r e t u r n   H A L _ O K ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f     D e I n i t i a l i z e s   t h e   R T C   p e r i p h e r a l  
     *   @ p a r a m     h r t c       p o i n t e r   t o   a   R T C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   R T C .  
     *   @ n o t e       T h i s   f u n c t i o n   d o e s   n o t   r e s e t   t h e   R T C   B a c k u p   D a t a   r e g i s t e r s .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ R T C _ D e I n i t ( R T C _ H a n d l e T y p e D e f   * h r t c )  
 {  
     / *   C h e c k   i n p u t   p a r a m e t e r s   * /  
     i f   ( h r t c   = =   N U L L )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ R T C _ A L L _ I N S T A N C E ( h r t c - > I n s t a n c e ) ) ;  
  
     / *   S e t   R T C   s t a t e   * /  
     h r t c - > S t a t e   =   H A L _ R T C _ S T A T E _ B U S Y ;  
  
     / *   S e t   I n i t i a l i z a t i o n   m o d e   * /  
     i f   ( R T C _ E n t e r I n i t M o d e ( h r t c )   ! =   H A L _ O K )  
     {  
         / *   S e t   R T C   s t a t e   * /  
         h r t c - > S t a t e   =   H A L _ R T C _ S T A T E _ E R R O R ;  
  
         / *   R e l e a s e   L o c k   * /  
         _ _ H A L _ U N L O C K ( h r t c ) ;  
  
         r e t u r n   H A L _ E R R O R ;  
     }  
     e l s e  
     {  
         C L E A R _ R E G ( h r t c - > I n s t a n c e - > C N T L ) ;  
         C L E A R _ R E G ( h r t c - > I n s t a n c e - > C N T H ) ;  
         W R I T E _ R E G ( h r t c - > I n s t a n c e - > P R L L ,   0 x 0 0 0 0 8 0 0 0 U ) ;  
         C L E A R _ R E G ( h r t c - > I n s t a n c e - > P R L H ) ;  
  
         / *   R e s e t   A l l   C R H / C R L   b i t s   * /  
         C L E A R _ R E G ( h r t c - > I n s t a n c e - > C R H ) ;  
         C L E A R _ R E G ( h r t c - > I n s t a n c e - > C R L ) ;  
  
         i f   ( R T C _ E x i t I n i t M o d e ( h r t c )   ! =   H A L _ O K )  
         {  
             h r t c - > S t a t e   =   H A L _ R T C _ S T A T E _ E R R O R ;  
  
             / *   P r o c e s s   U n l o c k e d   * /  
             _ _ H A L _ U N L O C K ( h r t c ) ;  
  
             r e t u r n   H A L _ E R R O R ;  
         }  
     }  
  
     / *   W a i t   f o r   s y n c h r o * /  
     H A L _ R T C _ W a i t F o r S y n c h r o ( h r t c ) ;  
  
     / *   C l e a r   R S F   f l a g   * /  
     C L E A R _ B I T ( h r t c - > I n s t a n c e - > C R L ,   R T C _ F L A G _ R S F ) ;  
  
 # i f   ( U S E _ H A L _ R T C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
     i f   ( h r t c - > M s p D e I n i t C a l l b a c k   = =   N U L L )  
     {  
         h r t c - > M s p D e I n i t C a l l b a c k   =   H A L _ R T C _ M s p D e I n i t ;  
     }  
  
     / *   D e I n i t   t h e   l o w   l e v e l   h a r d w a r e :   C L O C K ,   N V I C . * /  
     h r t c - > M s p D e I n i t C a l l b a c k ( h r t c ) ;  
  
 # e l s e  
     / *   D e - I n i t i a l i z e   R T C   M S P   * /  
     H A L _ R T C _ M s p D e I n i t ( h r t c ) ;  
 # e n d i f   / *   ( U S E _ H A L _ R T C _ R E G I S T E R _ C A L L B A C K S )   * /  
  
     h r t c - > S t a t e   =   H A L _ R T C _ S T A T E _ R E S E T ;  
  
     / *   R e l e a s e   L o c k   * /  
     _ _ H A L _ U N L O C K ( h r t c ) ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 # i f   ( U S E _ H A L _ R T C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
 / * *  
     *   @ b r i e f     R e g i s t e r   a   U s e r   R T C   C a l l b a c k  
     *                   T o   b e   u s e d   i n s t e a d   o f   t h e   w e a k   p r e d e f i n e d   c a l l b a c k  
     *   @ p a r a m     h r t c   R T C   h a n d l e  
     *   @ p a r a m     C a l l b a c k I D   I D   o f   t h e   c a l l b a c k   t o   b e   r e g i s t e r e d  
     *                   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                     @ a r g   @ r e f   H A L _ R T C _ A L A R M _ A _ E V E N T _ C B _ I D                     A l a r m   A   E v e n t   C a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ R T C _ T A M P E R 1 _ E V E N T _ C B _ I D                     T a m p e r   1   C a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ R T C _ M S P I N I T _ C B _ I D                                 M s p   I n i t   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ R T C _ M S P D E I N I T _ C B _ I D                             M s p   D e I n i t   c a l l b a c k   I D  
     *   @ p a r a m     p C a l l b a c k   p o i n t e r   t o   t h e   C a l l b a c k   f u n c t i o n  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ R T C _ R e g i s t e r C a l l b a c k ( R T C _ H a n d l e T y p e D e f   * h r t c ,   H A L _ R T C _ C a l l b a c k I D T y p e D e f   C a l l b a c k I D ,   p R T C _ C a l l b a c k T y p e D e f   p C a l l b a c k )  
 {  
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ O K ;  
  
     i f   ( p C a l l b a c k   = =   N U L L )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     / *   P r o c e s s   l o c k e d   * /  
     _ _ H A L _ L O C K ( h r t c ) ;  
  
     i f   ( H A L _ R T C _ S T A T E _ R E A D Y   = =   h r t c - > S t a t e )  
     {  
         s w i t c h   ( C a l l b a c k I D )  
         {  
             c a s e   H A L _ R T C _ A L A R M _ A _ E V E N T _ C B _ I D   :  
                 h r t c - > A l a r m A E v e n t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ R T C _ T A M P E R 1 _ E V E N T _ C B _ I D   :  
                 h r t c - > T a m p e r 1 E v e n t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ R T C _ M S P I N I T _ C B _ I D   :  
                 h r t c - > M s p I n i t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ R T C _ M S P D E I N I T _ C B _ I D   :  
                 h r t c - > M s p D e I n i t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             d e f a u l t   :  
                 / *   R e t u r n   e r r o r   s t a t u s   * /  
                 s t a t u s   =     H A L _ E R R O R ;  
                 b r e a k ;  
         }  
     }  
     e l s e   i f   ( H A L _ R T C _ S T A T E _ R E S E T   = =   h r t c - > S t a t e )  
     {  
         s w i t c h   ( C a l l b a c k I D )  
         {  
             c a s e   H A L _ R T C _ M S P I N I T _ C B _ I D   :  
                 h r t c - > M s p I n i t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ R T C _ M S P D E I N I T _ C B _ I D   :  
                 h r t c - > M s p D e I n i t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             d e f a u l t   :  
                 / *   R e t u r n   e r r o r   s t a t u s   * /  
                 s t a t u s   =     H A L _ E R R O R ;  
                 b r e a k ;  
         }  
     }  
     e l s e  
     {  
         / *   R e t u r n   e r r o r   s t a t u s   * /  
         s t a t u s   =     H A L _ E R R O R ;  
     }  
  
     / *   R e l e a s e   L o c k   * /  
     _ _ H A L _ U N L O C K ( h r t c ) ;  
  
     r e t u r n   s t a t u s ;  
 }  
  
 / * *  
     *   @ b r i e f     U n r e g i s t e r   a n   R T C   C a l l b a c k  
     *                   R T C   c a l l a b c k   i s   r e d i r e c t e d   t o   t h e   w e a k   p r e d e f i n e d   c a l l b a c k  
     *   @ p a r a m     h r t c   R T C   h a n d l e  
     *   @ p a r a m     C a l l b a c k I D   I D   o f   t h e   c a l l b a c k   t o   b e   u n r e g i s t e r e d  
     *                   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                     @ a r g   @ r e f   H A L _ R T C _ A L A R M _ A _ E V E N T _ C B _ I D                     A l a r m   A   E v e n t   C a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ R T C _ T A M P E R 1 _ E V E N T _ C B _ I D                     T a m p e r   1   C a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ R T C _ M S P I N I T _ C B _ I D   M s p   I n i t   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ R T C _ M S P D E I N I T _ C B _ I D   M s p   D e I n i t   c a l l b a c k   I D  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ R T C _ U n R e g i s t e r C a l l b a c k ( R T C _ H a n d l e T y p e D e f   * h r t c ,   H A L _ R T C _ C a l l b a c k I D T y p e D e f   C a l l b a c k I D )  
 {  
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ O K ;  
  
     / *   P r o c e s s   l o c k e d   * /  
     _ _ H A L _ L O C K ( h r t c ) ;  
  
     i f   ( H A L _ R T C _ S T A T E _ R E A D Y   = =   h r t c - > S t a t e )  
     {  
         s w i t c h   ( C a l l b a c k I D )  
         {  
             c a s e   H A L _ R T C _ A L A R M _ A _ E V E N T _ C B _ I D   :  
                 h r t c - > A l a r m A E v e n t C a l l b a c k   =   H A L _ R T C _ A l a r m A E v e n t C a l l b a c k ;                   / *   L e g a c y   w e a k   A l a r m A E v e n t C a l l b a c k         * /  
                 b r e a k ;  
  
             c a s e   H A L _ R T C _ T A M P E R 1 _ E V E N T _ C B _ I D   :  
                 h r t c - > T a m p e r 1 E v e n t C a l l b a c k   =   H A L _ R T C E x _ T a m p e r 1 E v e n t C a l l b a c k ;                   / *   L e g a c y   w e a k   T a m p e r 1 E v e n t C a l l b a c k       * /  
                 b r e a k ;  
  
             c a s e   H A L _ R T C _ M S P I N I T _ C B _ I D   :  
                 h r t c - > M s p I n i t C a l l b a c k   =   H A L _ R T C _ M s p I n i t ;  
                 b r e a k ;  
  
             c a s e   H A L _ R T C _ M S P D E I N I T _ C B _ I D   :  
                 h r t c - > M s p D e I n i t C a l l b a c k   =   H A L _ R T C _ M s p D e I n i t ;  
                 b r e a k ;  
  
             d e f a u l t   :  
                 / *   R e t u r n   e r r o r   s t a t u s   * /  
                 s t a t u s   =     H A L _ E R R O R ;  
                 b r e a k ;  
         }  
     }  
     e l s e   i f   ( H A L _ R T C _ S T A T E _ R E S E T   = =   h r t c - > S t a t e )  
     {  
         s w i t c h   ( C a l l b a c k I D )  
         {  
             c a s e   H A L _ R T C _ M S P I N I T _ C B _ I D   :  
                 h r t c - > M s p I n i t C a l l b a c k   =   H A L _ R T C _ M s p I n i t ;  
                 b r e a k ;  
  
             c a s e   H A L _ R T C _ M S P D E I N I T _ C B _ I D   :  
                 h r t c - > M s p D e I n i t C a l l b a c k   =   H A L _ R T C _ M s p D e I n i t ;  
                 b r e a k ;  
  
             d e f a u l t   :  
                 / *   R e t u r n   e r r o r   s t a t u s   * /  
                 s t a t u s   =     H A L _ E R R O R ;  
                 b r e a k ;  
         }  
     }  
     e l s e  
     {  
         / *   R e t u r n   e r r o r   s t a t u s   * /  
         s t a t u s   =     H A L _ E R R O R ;  
     }  
  
     / *   R e l e a s e   L o c k   * /  
     _ _ H A L _ U N L O C K ( h r t c ) ;  
  
     r e t u r n   s t a t u s ;  
 }  
 # e n d i f   / *   U S E _ H A L _ R T C _ R E G I S T E R _ C A L L B A C K S   * /  
  
 / * *  
     *   @ b r i e f     I n i t i a l i z e s   t h e   R T C   M S P .  
     *   @ p a r a m     h r t c       p o i n t e r   t o   a   R T C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   R T C .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ R T C _ M s p I n i t ( R T C _ H a n d l e T y p e D e f   * h r t c )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h r t c ) ;  
     / *   N O T E   :   T h i s   f u n c t i o n   S h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ R T C _ M s p I n i t   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ b r i e f     D e I n i t i a l i z e s   t h e   R T C   M S P .  
     *   @ p a r a m     h r t c       p o i n t e r   t o   a   R T C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   R T C .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ R T C _ M s p D e I n i t ( R T C _ H a n d l e T y p e D e f   * h r t c )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h r t c ) ;  
     / *   N O T E   :   T h i s   f u n c t i o n   S h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ R T C _ M s p D e I n i t   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   R T C _ E x p o r t e d _ F u n c t i o n s _ G r o u p 2   T i m e   a n d   D a t e   f u n c t i o n s  
   *     @ b r i e f       R T C   T i m e   a n d   D a t e   f u n c t i o n s  
   *  
 @ v e r b a t i m  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                   # # # # #   R T C   T i m e   a n d   D a t e   f u n c t i o n s   # # # # #  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
  
   [ . . ]   T h i s   s e c t i o n   p r o v i d e s   f u n c t i o n s   a l l o w i n g   t o   c o n f i g u r e   T i m e   a n d   D a t e   f e a t u r e s  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     S e t s   R T C   c u r r e n t   t i m e .  
     *   @ p a r a m     h r t c       p o i n t e r   t o   a   R T C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   R T C .  
     *   @ p a r a m     s T i m e :   P o i n t e r   t o   T i m e   s t r u c t u r e  
     *   @ p a r a m     F o r m a t :   S p e c i f i e s   t h e   f o r m a t   o f   t h e   e n t e r e d   p a r a m e t e r s .  
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   R T C _ F O R M A T _ B I N :   B i n a r y   d a t a   f o r m a t  
     *                         @ a r g   R T C _ F O R M A T _ B C D :   B C D   d a t a   f o r m a t  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ R T C _ S e t T i m e ( R T C _ H a n d l e T y p e D e f   * h r t c ,   R T C _ T i m e T y p e D e f   * s T i m e ,   u i n t 3 2 _ t   F o r m a t )  
 {  
     u i n t 3 2 _ t   c o u n t e r _ t i m e   =   0 U ,   c o u n t e r _ a l a r m   =   0 U ;  
  
     / *   C h e c k   i n p u t   p a r a m e t e r s   * /  
     i f   ( ( h r t c   = =   N U L L )   | |   ( s T i m e   = =   N U L L ) )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ R T C _ F O R M A T ( F o r m a t ) ) ;  
  
     / *   P r o c e s s   L o c k e d   * /  
     _ _ H A L _ L O C K ( h r t c ) ;  
  
     h r t c - > S t a t e   =   H A L _ R T C _ S T A T E _ B U S Y ;  
  
     i f   ( F o r m a t   = =   R T C _ F O R M A T _ B I N )  
     {  
         a s s e r t _ p a r a m ( I S _ R T C _ H O U R 2 4 ( s T i m e - > H o u r s ) ) ;  
         a s s e r t _ p a r a m ( I S _ R T C _ M I N U T E S ( s T i m e - > M i n u t e s ) ) ;  
         a s s e r t _ p a r a m ( I S _ R T C _ S E C O N D S ( s T i m e - > S e c o n d s ) ) ;  
  
         c o u n t e r _ t i m e   =   ( u i n t 3 2 _ t ) ( ( ( u i n t 3 2 _ t ) s T i m e - > H o u r s   *   3 6 0 0 U )   +   \  
                                                             ( ( u i n t 3 2 _ t ) s T i m e - > M i n u t e s   *   6 0 U )   +   \  
                                                             ( ( u i n t 3 2 _ t ) s T i m e - > S e c o n d s ) ) ;  
     }  
     e l s e  
     {  
         a s s e r t _ p a r a m ( I S _ R T C _ H O U R 2 4 ( R T C _ B c d 2 T o B y t e ( s T i m e - > H o u r s ) ) ) ;  
         a s s e r t _ p a r a m ( I S _ R T C _ M I N U T E S ( R T C _ B c d 2 T o B y t e ( s T i m e - > M i n u t e s ) ) ) ;  
         a s s e r t _ p a r a m ( I S _ R T C _ S E C O N D S ( R T C _ B c d 2 T o B y t e ( s T i m e - > S e c o n d s ) ) ) ;  
  
         c o u n t e r _ t i m e   =   ( ( ( u i n t 3 2 _ t ) ( R T C _ B c d 2 T o B y t e ( s T i m e - > H o u r s ) )   *   3 6 0 0 U )   +   \  
                                         ( ( u i n t 3 2 _ t ) ( R T C _ B c d 2 T o B y t e ( s T i m e - > M i n u t e s ) )   *   6 0 U )   +   \  
                                         ( ( u i n t 3 2 _ t ) ( R T C _ B c d 2 T o B y t e ( s T i m e - > S e c o n d s ) ) ) ) ;  
     }  
  
     / *   W r i t e   t i m e   c o u n t e r   i n   R T C   r e g i s t e r s   * /  
     i f   ( R T C _ W r i t e T i m e C o u n t e r ( h r t c ,   c o u n t e r _ t i m e )   ! =   H A L _ O K )  
     {  
         / *   S e t   R T C   s t a t e   * /  
         h r t c - > S t a t e   =   H A L _ R T C _ S T A T E _ E R R O R ;  
  
         / *   P r o c e s s   U n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h r t c ) ;  
  
         r e t u r n   H A L _ E R R O R ;  
     }  
     e l s e  
     {  
         / *   C l e a r   S e c o n d   a n d   o v e r f l o w   f l a g s   * /  
         C L E A R _ B I T ( h r t c - > I n s t a n c e - > C R L ,   ( R T C _ F L A G _ S E C   |   R T C _ F L A G _ O W ) ) ;  
  
         / *   R e a d   c u r r e n t   A l a r m   c o u n t e r   i n   R T C   r e g i s t e r s   * /  
         c o u n t e r _ a l a r m   =   R T C _ R e a d A l a r m C o u n t e r ( h r t c ) ;  
  
         / *   S e t   a g a i n   a l a r m   t o   m a t c h   w i t h   n e w   t i m e   i f   e n a b l e d   * /  
         i f   ( c o u n t e r _ a l a r m   ! =   R T C _ A L A R M _ R E S E T V A L U E )  
         {  
             i f   ( c o u n t e r _ a l a r m   <   c o u n t e r _ t i m e )  
             {  
                 / *   A d d   1   d a y   t o   a l a r m   c o u n t e r * /  
                 c o u n t e r _ a l a r m   + =   ( u i n t 3 2 _ t ) ( 2 4 U   *   3 6 0 0 U ) ;  
  
                 / *   W r i t e   n e w   A l a r m   c o u n t e r   i n   R T C   r e g i s t e r s   * /  
                 i f   ( R T C _ W r i t e A l a r m C o u n t e r ( h r t c ,   c o u n t e r _ a l a r m )   ! =   H A L _ O K )  
                 {  
                     / *   S e t   R T C   s t a t e   * /  
                     h r t c - > S t a t e   =   H A L _ R T C _ S T A T E _ E R R O R ;  
  
                     / *   P r o c e s s   U n l o c k e d   * /  
                     _ _ H A L _ U N L O C K ( h r t c ) ;  
  
                     r e t u r n   H A L _ E R R O R ;  
                 }  
             }  
         }  
  
         h r t c - > S t a t e   =   H A L _ R T C _ S T A T E _ R E A D Y ;  
  
         _ _ H A L _ U N L O C K ( h r t c ) ;  
  
         r e t u r n   H A L _ O K ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f     G e t s   R T C   c u r r e n t   t i m e .  
     *   @ p a r a m     h r t c       p o i n t e r   t o   a   R T C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   R T C .  
     *   @ p a r a m     s T i m e :   P o i n t e r   t o   T i m e   s t r u c t u r e  
     *   @ p a r a m     F o r m a t :   S p e c i f i e s   t h e   f o r m a t   o f   t h e   e n t e r e d   p a r a m e t e r s .  
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   R T C _ F O R M A T _ B I N :   B i n a r y   d a t a   f o r m a t  
     *                         @ a r g   R T C _ F O R M A T _ B C D :   B C D   d a t a   f o r m a t  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ R T C _ G e t T i m e ( R T C _ H a n d l e T y p e D e f   * h r t c ,   R T C _ T i m e T y p e D e f   * s T i m e ,   u i n t 3 2 _ t   F o r m a t )  
 {  
     u i n t 3 2 _ t   c o u n t e r _ t i m e   =   0 U ,   c o u n t e r _ a l a r m   =   0 U ,   d a y s _ e l a p s e d   =   0 U ,   h o u r s   =   0 U ;  
  
     / *   C h e c k   i n p u t   p a r a m e t e r s   * /  
     i f   ( ( h r t c   = =   N U L L )   | |   ( s T i m e   = =   N U L L ) )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ R T C _ F O R M A T ( F o r m a t ) ) ;  
  
     / *   C h e c k   i f   c o u n t e r   o v e r f l o w   o c c u r r e d   * /  
     i f   ( _ _ H A L _ R T C _ O V E R F L O W _ G E T _ F L A G ( h r t c ,   R T C _ F L A G _ O W ) )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     / *   R e a d   t h e   t i m e   c o u n t e r * /  
     c o u n t e r _ t i m e   =   R T C _ R e a d T i m e C o u n t e r ( h r t c ) ;  
  
     / *   F i l l   t h e   s t r u c t u r e   f i e l d s   w i t h   t h e   r e a d   p a r a m e t e r s   * /  
     h o u r s   =   c o u n t e r _ t i m e   /   3 6 0 0 U ;  
     s T i m e - > M i n u t e s     =   ( u i n t 8 _ t ) ( ( c o u n t e r _ t i m e   %   3 6 0 0 U )   /   6 0 U ) ;  
     s T i m e - > S e c o n d s     =   ( u i n t 8 _ t ) ( ( c o u n t e r _ t i m e   %   3 6 0 0 U )   %   6 0 U ) ;  
  
     i f   ( h o u r s   > =   2 4 U )  
     {  
         / *   G e t   n u m b e r   o f   d a y s   e l a p s e d   f r o m   l a s t   c a l c u l a t i o n   * /  
         d a y s _ e l a p s e d   =   ( h o u r s   /   2 4 U ) ;  
  
         / *   S e t   H o u r s   i n   R T C _ T i m e T y p e D e f   s t r u c t u r e * /  
         s T i m e - > H o u r s   =   ( h o u r s   %   2 4 U ) ;  
  
         / *   R e a d   A l a r m   c o u n t e r   i n   R T C   r e g i s t e r s   * /  
         c o u n t e r _ a l a r m   =   R T C _ R e a d A l a r m C o u n t e r ( h r t c ) ;  
  
         / *   C a l c u l a t e   r e m a i n i n g   t i m e   t o   r e a c h   a l a r m   ( o n l y   i f   s e t   a n d   n o t   y e t   e x p i r e d ) * /  
         i f   ( ( c o u n t e r _ a l a r m   ! =   R T C _ A L A R M _ R E S E T V A L U E )   & &   ( c o u n t e r _ a l a r m   >   c o u n t e r _ t i m e ) )  
         {  
             c o u n t e r _ a l a r m   - =   c o u n t e r _ t i m e ;  
         }  
         e l s e  
         {  
             / *   I n   c a s e   o f   c o u n t e r _ a l a r m   <   c o u n t e r _ t i m e   * /  
             / *   A l a r m   e x p i r a t i o n   a l r e a d y   o c c u r r e d   b u t   a l a r m   n o t   d e a c t i v a t e d   * /  
             c o u n t e r _ a l a r m   =   R T C _ A L A R M _ R E S E T V A L U E ;  
         }  
  
         / *   S e t   u p d a t e d   t i m e   i n   d e c r e a s i n g   c o u n t e r   b y   n u m b e r   o f   d a y s   e l a p s e d   * /  
         c o u n t e r _ t i m e   - =   ( d a y s _ e l a p s e d   *   2 4 U   *   3 6 0 0 U ) ;  
  
         / *   W r i t e   t i m e   c o u n t e r   i n   R T C   r e g i s t e r s   * /  
         i f   ( R T C _ W r i t e T i m e C o u n t e r ( h r t c ,   c o u n t e r _ t i m e )   ! =   H A L _ O K )  
         {  
             r e t u r n   H A L _ E R R O R ;  
         }  
  
         / *   S e t   u p d a t e d   a l a r m   t o   b e   s e t   * /  
         i f   ( c o u n t e r _ a l a r m   ! =   R T C _ A L A R M _ R E S E T V A L U E )  
         {  
             c o u n t e r _ a l a r m   + =   c o u n t e r _ t i m e ;  
  
             / *   W r i t e   t i m e   c o u n t e r   i n   R T C   r e g i s t e r s   * /  
             i f   ( R T C _ W r i t e A l a r m C o u n t e r ( h r t c ,   c o u n t e r _ a l a r m )   ! =   H A L _ O K )  
             {  
                 r e t u r n   H A L _ E R R O R ;  
             }  
         }  
         e l s e  
         {  
             / *   A l a r m   a l r e a d y   o c c u r r e d .   S e t   i t   t o   r e s e t   v a l u e s   t o   a v o i d   u n e x p e c t e d   e x p i r a t i o n   * /  
             i f   ( R T C _ W r i t e A l a r m C o u n t e r ( h r t c ,   c o u n t e r _ a l a r m )   ! =   H A L _ O K )  
             {  
                 r e t u r n   H A L _ E R R O R ;  
             }  
         }  
  
         / *   U p d a t e   d a t e   * /  
         R T C _ D a t e U p d a t e ( h r t c ,   d a y s _ e l a p s e d ) ;  
     }  
     e l s e  
     {  
         s T i m e - > H o u r s   =   h o u r s ;  
     }  
  
     / *   C h e c k   t h e   i n p u t   p a r a m e t e r s   f o r m a t   * /  
     i f   ( F o r m a t   ! =   R T C _ F O R M A T _ B I N )  
     {  
         / *   C o n v e r t   t h e   t i m e   s t r u c t u r e   p a r a m e t e r s   t o   B C D   f o r m a t   * /  
         s T i m e - > H o u r s         =   ( u i n t 8 _ t ) R T C _ B y t e T o B c d 2 ( s T i m e - > H o u r s ) ;  
         s T i m e - > M i n u t e s     =   ( u i n t 8 _ t ) R T C _ B y t e T o B c d 2 ( s T i m e - > M i n u t e s ) ;  
         s T i m e - > S e c o n d s     =   ( u i n t 8 _ t ) R T C _ B y t e T o B c d 2 ( s T i m e - > S e c o n d s ) ;  
     }  
  
     r e t u r n   H A L _ O K ;  
 }  
  
  
 / * *  
     *   @ b r i e f     S e t s   R T C   c u r r e n t   d a t e .  
     *   @ p a r a m     h r t c       p o i n t e r   t o   a   R T C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   R T C .  
     *   @ p a r a m     s D a t e :   P o i n t e r   t o   d a t e   s t r u c t u r e  
     *   @ p a r a m     F o r m a t :   s p e c i f i e s   t h e   f o r m a t   o f   t h e   e n t e r e d   p a r a m e t e r s .  
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   R T C _ F O R M A T _ B I N :   B i n a r y   d a t a   f o r m a t  
     *                         @ a r g   R T C _ F O R M A T _ B C D :   B C D   d a t a   f o r m a t  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ R T C _ S e t D a t e ( R T C _ H a n d l e T y p e D e f   * h r t c ,   R T C _ D a t e T y p e D e f   * s D a t e ,   u i n t 3 2 _ t   F o r m a t )  
 {  
     u i n t 3 2 _ t   c o u n t e r _ t i m e   =   0 U ,   c o u n t e r _ a l a r m   =   0 U ,   h o u r s   =   0 U ;  
  
     / *   C h e c k   i n p u t   p a r a m e t e r s   * /  
     i f   ( ( h r t c   = =   N U L L )   | |   ( s D a t e   = =   N U L L ) )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ R T C _ F O R M A T ( F o r m a t ) ) ;  
  
     / *   P r o c e s s   L o c k e d   * /  
     _ _ H A L _ L O C K ( h r t c ) ;  
  
     h r t c - > S t a t e   =   H A L _ R T C _ S T A T E _ B U S Y ;  
  
     i f   ( F o r m a t   = =   R T C _ F O R M A T _ B I N )  
     {  
         a s s e r t _ p a r a m ( I S _ R T C _ Y E A R ( s D a t e - > Y e a r ) ) ;  
         a s s e r t _ p a r a m ( I S _ R T C _ M O N T H ( s D a t e - > M o n t h ) ) ;  
         a s s e r t _ p a r a m ( I S _ R T C _ D A T E ( s D a t e - > D a t e ) ) ;  
  
         / *   C h a n g e   t h e   c u r r e n t   d a t e   * /  
         h r t c - > D a t e T o U p d a t e . Y e a r     =   s D a t e - > Y e a r ;  
         h r t c - > D a t e T o U p d a t e . M o n t h   =   s D a t e - > M o n t h ;  
         h r t c - > D a t e T o U p d a t e . D a t e     =   s D a t e - > D a t e ;  
     }  
     e l s e  
     {  
         a s s e r t _ p a r a m ( I S _ R T C _ Y E A R ( R T C _ B c d 2 T o B y t e ( s D a t e - > Y e a r ) ) ) ;  
         a s s e r t _ p a r a m ( I S _ R T C _ M O N T H ( R T C _ B c d 2 T o B y t e ( s D a t e - > M o n t h ) ) ) ;  
         a s s e r t _ p a r a m ( I S _ R T C _ D A T E ( R T C _ B c d 2 T o B y t e ( s D a t e - > D a t e ) ) ) ;  
  
         / *   C h a n g e   t h e   c u r r e n t   d a t e   * /  
         h r t c - > D a t e T o U p d a t e . Y e a r     =   R T C _ B c d 2 T o B y t e ( s D a t e - > Y e a r ) ;  
         h r t c - > D a t e T o U p d a t e . M o n t h   =   R T C _ B c d 2 T o B y t e ( s D a t e - > M o n t h ) ;  
         h r t c - > D a t e T o U p d a t e . D a t e     =   R T C _ B c d 2 T o B y t e ( s D a t e - > D a t e ) ;  
     }  
  
     / *   W e e k D a y   s e t   b y   u s e r   c a n   b e   i g n o r e d   b e c a u s e   a u t o m a t i c a l l y   c a l c u l a t e d   * /  
     h r t c - > D a t e T o U p d a t e . W e e k D a y   =   R T C _ W e e k D a y N u m ( h r t c - > D a t e T o U p d a t e . Y e a r ,   h r t c - > D a t e T o U p d a t e . M o n t h ,   h r t c - > D a t e T o U p d a t e . D a t e ) ;  
     s D a t e - > W e e k D a y   =   h r t c - > D a t e T o U p d a t e . W e e k D a y ;  
  
     / *   R e s e t   t i m e   t o   b e   a l i g n e d   o n   t h e   s a m e   d a y   * /  
     / *   R e a d   t h e   t i m e   c o u n t e r * /  
     c o u n t e r _ t i m e   =   R T C _ R e a d T i m e C o u n t e r ( h r t c ) ;  
  
     / *   F i l l   t h e   s t r u c t u r e   f i e l d s   w i t h   t h e   r e a d   p a r a m e t e r s   * /  
     h o u r s   =   c o u n t e r _ t i m e   /   3 6 0 0 U ;  
     i f   ( h o u r s   >   2 4 U )  
     {  
         / *   S e t   u p d a t e d   t i m e   i n   d e c r e a s i n g   c o u n t e r   b y   n u m b e r   o f   d a y s   e l a p s e d   * /  
         c o u n t e r _ t i m e   - =   ( ( h o u r s   /   2 4 U )   *   2 4 U   *   3 6 0 0 U ) ;  
         / *   W r i t e   t i m e   c o u n t e r   i n   R T C   r e g i s t e r s   * /  
         i f   ( R T C _ W r i t e T i m e C o u n t e r ( h r t c ,   c o u n t e r _ t i m e )   ! =   H A L _ O K )  
         {  
             / *   S e t   R T C   s t a t e   * /  
             h r t c - > S t a t e   =   H A L _ R T C _ S T A T E _ E R R O R ;  
  
             / *   P r o c e s s   U n l o c k e d   * /  
             _ _ H A L _ U N L O C K ( h r t c ) ;  
  
             r e t u r n   H A L _ E R R O R ;  
         }  
  
         / *   R e a d   c u r r e n t   A l a r m   c o u n t e r   i n   R T C   r e g i s t e r s   * /  
         c o u n t e r _ a l a r m   =   R T C _ R e a d A l a r m C o u n t e r ( h r t c ) ;  
  
         / *   S e t   a g a i n   a l a r m   t o   m a t c h   w i t h   n e w   t i m e   i f   e n a b l e d   * /  
         i f   ( c o u n t e r _ a l a r m   ! =   R T C _ A L A R M _ R E S E T V A L U E )  
         {  
             i f   ( c o u n t e r _ a l a r m   <   c o u n t e r _ t i m e )  
             {  
                 / *   A d d   1   d a y   t o   a l a r m   c o u n t e r * /  
                 c o u n t e r _ a l a r m   + =   ( u i n t 3 2 _ t ) ( 2 4 U   *   3 6 0 0 U ) ;  
  
                 / *   W r i t e   n e w   A l a r m   c o u n t e r   i n   R T C   r e g i s t e r s   * /  
                 i f   ( R T C _ W r i t e A l a r m C o u n t e r ( h r t c ,   c o u n t e r _ a l a r m )   ! =   H A L _ O K )  
                 {  
                     / *   S e t   R T C   s t a t e   * /  
                     h r t c - > S t a t e   =   H A L _ R T C _ S T A T E _ E R R O R ;  
  
                     / *   P r o c e s s   U n l o c k e d   * /  
                     _ _ H A L _ U N L O C K ( h r t c ) ;  
  
                     r e t u r n   H A L _ E R R O R ;  
                 }  
             }  
         }  
  
  
     }  
  
     h r t c - > S t a t e   =   H A L _ R T C _ S T A T E _ R E A D Y   ;  
  
     / *   P r o c e s s   U n l o c k e d   * /  
     _ _ H A L _ U N L O C K ( h r t c ) ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t s   R T C   c u r r e n t   d a t e .  
     *   @ p a r a m     h r t c       p o i n t e r   t o   a   R T C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   R T C .  
     *   @ p a r a m     s D a t e :   P o i n t e r   t o   D a t e   s t r u c t u r e  
     *   @ p a r a m     F o r m a t :   S p e c i f i e s   t h e   f o r m a t   o f   t h e   e n t e r e d   p a r a m e t e r s .  
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   R T C _ F O R M A T _ B I N :     B i n a r y   d a t a   f o r m a t  
     *                         @ a r g   R T C _ F O R M A T _ B C D :     B C D   d a t a   f o r m a t  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ R T C _ G e t D a t e ( R T C _ H a n d l e T y p e D e f   * h r t c ,   R T C _ D a t e T y p e D e f   * s D a t e ,   u i n t 3 2 _ t   F o r m a t )  
 {  
     R T C _ T i m e T y p e D e f   s t i m e   =   { 0 U } ;  
  
     / *   C h e c k   i n p u t   p a r a m e t e r s   * /  
     i f   ( ( h r t c   = =   N U L L )   | |   ( s D a t e   = =   N U L L ) )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ R T C _ F O R M A T ( F o r m a t ) ) ;  
  
     / *   C a l l   H A L _ R T C _ G e t T i m e   f u n c t i o n   t o   u p d a t e   d a t e   i f   c o u n t e r   h i g h e r   t h a n   2 4   h o u r s   * /  
     i f   ( H A L _ R T C _ G e t T i m e ( h r t c ,   & s t i m e ,   R T C _ F O R M A T _ B I N )   ! =   H A L _ O K )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     / *   F i l l   t h e   s t r u c t u r e   f i e l d s   w i t h   t h e   r e a d   p a r a m e t e r s   * /  
     s D a t e - > W e e k D a y     =   h r t c - > D a t e T o U p d a t e . W e e k D a y ;  
     s D a t e - > Y e a r           =   h r t c - > D a t e T o U p d a t e . Y e a r ;  
     s D a t e - > M o n t h         =   h r t c - > D a t e T o U p d a t e . M o n t h ;  
     s D a t e - > D a t e           =   h r t c - > D a t e T o U p d a t e . D a t e ;  
  
     / *   C h e c k   t h e   i n p u t   p a r a m e t e r s   f o r m a t   * /  
     i f   ( F o r m a t   ! =   R T C _ F O R M A T _ B I N )  
     {  
         / *   C o n v e r t   t h e   d a t e   s t r u c t u r e   p a r a m e t e r s   t o   B C D   f o r m a t   * /  
         s D a t e - > Y e a r       =   ( u i n t 8 _ t ) R T C _ B y t e T o B c d 2 ( s D a t e - > Y e a r ) ;  
         s D a t e - > M o n t h     =   ( u i n t 8 _ t ) R T C _ B y t e T o B c d 2 ( s D a t e - > M o n t h ) ;  
         s D a t e - > D a t e       =   ( u i n t 8 _ t ) R T C _ B y t e T o B c d 2 ( s D a t e - > D a t e ) ;  
     }  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   R T C _ E x p o r t e d _ F u n c t i o n s _ G r o u p 3   A l a r m   f u n c t i o n s  
   *     @ b r i e f       R T C   A l a r m   f u n c t i o n s  
   *  
 @ v e r b a t i m  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                   # # # # #   R T C   A l a r m   f u n c t i o n s   # # # # #  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
  
   [ . . ]   T h i s   s e c t i o n   p r o v i d e s   f u n c t i o n s   a l l o w i n g   t o   c o n f i g u r e   A l a r m   f e a t u r e  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     S e t s   t h e   s p e c i f i e d   R T C   A l a r m .  
     *   @ p a r a m     h r t c       p o i n t e r   t o   a   R T C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   R T C .  
     *   @ p a r a m     s A l a r m :   P o i n t e r   t o   A l a r m   s t r u c t u r e  
     *   @ p a r a m     F o r m a t :   S p e c i f i e s   t h e   f o r m a t   o f   t h e   e n t e r e d   p a r a m e t e r s .  
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                           @ a r g   R T C _ F O R M A T _ B I N :   B i n a r y   d a t a   f o r m a t  
     *                           @ a r g   R T C _ F O R M A T _ B C D :   B C D   d a t a   f o r m a t  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ R T C _ S e t A l a r m ( R T C _ H a n d l e T y p e D e f   * h r t c ,   R T C _ A l a r m T y p e D e f   * s A l a r m ,   u i n t 3 2 _ t   F o r m a t )  
 {  
     u i n t 3 2 _ t   c o u n t e r _ a l a r m   =   0 U ,   c o u n t e r _ t i m e ;  
     R T C _ T i m e T y p e D e f   s t i m e   =   { 0 U } ;  
  
     / *   C h e c k   i n p u t   p a r a m e t e r s   * /  
     i f   ( ( h r t c   = =   N U L L )   | |   ( s A l a r m   = =   N U L L ) )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ R T C _ F O R M A T ( F o r m a t ) ) ;  
     a s s e r t _ p a r a m ( I S _ R T C _ A L A R M ( s A l a r m - > A l a r m ) ) ;  
  
     / *   P r o c e s s   L o c k e d   * /  
     _ _ H A L _ L O C K ( h r t c ) ;  
  
     h r t c - > S t a t e   =   H A L _ R T C _ S T A T E _ B U S Y ;  
  
     / *   C a l l   H A L _ R T C _ G e t T i m e   f u n c t i o n   t o   u p d a t e   d a t e   i f   c o u n t e r   h i g h e r   t h a n   2 4   h o u r s   * /  
     i f   ( H A L _ R T C _ G e t T i m e ( h r t c ,   & s t i m e ,   R T C _ F O R M A T _ B I N )   ! =   H A L _ O K )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     / *   C o n v e r t   t i m e   i n   s e c o n d s   * /  
     c o u n t e r _ t i m e   =   ( u i n t 3 2 _ t ) ( ( ( u i n t 3 2 _ t ) s t i m e . H o u r s   *   3 6 0 0 U )   +   \  
                                                         ( ( u i n t 3 2 _ t ) s t i m e . M i n u t e s   *   6 0 U )   +   \  
                                                         ( ( u i n t 3 2 _ t ) s t i m e . S e c o n d s ) ) ;  
  
     i f   ( F o r m a t   = =   R T C _ F O R M A T _ B I N )  
     {  
         a s s e r t _ p a r a m ( I S _ R T C _ H O U R 2 4 ( s A l a r m - > A l a r m T i m e . H o u r s ) ) ;  
         a s s e r t _ p a r a m ( I S _ R T C _ M I N U T E S ( s A l a r m - > A l a r m T i m e . M i n u t e s ) ) ;  
         a s s e r t _ p a r a m ( I S _ R T C _ S E C O N D S ( s A l a r m - > A l a r m T i m e . S e c o n d s ) ) ;  
  
         c o u n t e r _ a l a r m   =   ( u i n t 3 2 _ t ) ( ( ( u i n t 3 2 _ t ) s A l a r m - > A l a r m T i m e . H o u r s   *   3 6 0 0 U )   +   \  
                                                               ( ( u i n t 3 2 _ t ) s A l a r m - > A l a r m T i m e . M i n u t e s   *   6 0 U )   +   \  
                                                               ( ( u i n t 3 2 _ t ) s A l a r m - > A l a r m T i m e . S e c o n d s ) ) ;  
     }  
     e l s e  
     {  
         a s s e r t _ p a r a m ( I S _ R T C _ H O U R 2 4 ( R T C _ B c d 2 T o B y t e ( s A l a r m - > A l a r m T i m e . H o u r s ) ) ) ;  
         a s s e r t _ p a r a m ( I S _ R T C _ M I N U T E S ( R T C _ B c d 2 T o B y t e ( s A l a r m - > A l a r m T i m e . M i n u t e s ) ) ) ;  
         a s s e r t _ p a r a m ( I S _ R T C _ S E C O N D S ( R T C _ B c d 2 T o B y t e ( s A l a r m - > A l a r m T i m e . S e c o n d s ) ) ) ;  
  
         c o u n t e r _ a l a r m   =   ( ( ( u i n t 3 2 _ t ) ( R T C _ B c d 2 T o B y t e ( s A l a r m - > A l a r m T i m e . H o u r s ) )   *   3 6 0 0 U )   +   \  
                                           ( ( u i n t 3 2 _ t ) ( R T C _ B c d 2 T o B y t e ( s A l a r m - > A l a r m T i m e . M i n u t e s ) )   *   6 0 U )   +   \  
                                           ( ( u i n t 3 2 _ t ) R T C _ B c d 2 T o B y t e ( s A l a r m - > A l a r m T i m e . S e c o n d s ) ) ) ;  
     }  
  
     / *   C h e c k   t h a t   r e q u e s t e d   a l a r m   s h o u l d   e x p i r e   i n   t h e   s a m e   d a y   ( o t h e r w i s e   a d d   1   d a y )   * /  
     i f   ( c o u n t e r _ a l a r m   <   c o u n t e r _ t i m e )  
     {  
         / *   A d d   1   d a y   t o   a l a r m   c o u n t e r * /  
         c o u n t e r _ a l a r m   + =   ( u i n t 3 2 _ t ) ( 2 4 U   *   3 6 0 0 U ) ;  
     }  
  
     / *   W r i t e   A l a r m   c o u n t e r   i n   R T C   r e g i s t e r s   * /  
     i f   ( R T C _ W r i t e A l a r m C o u n t e r ( h r t c ,   c o u n t e r _ a l a r m )   ! =   H A L _ O K )  
     {  
         / *   S e t   R T C   s t a t e   * /  
         h r t c - > S t a t e   =   H A L _ R T C _ S T A T E _ E R R O R ;  
  
         / *   P r o c e s s   U n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h r t c ) ;  
  
         r e t u r n   H A L _ E R R O R ;  
     }  
     e l s e  
     {  
         h r t c - > S t a t e   =   H A L _ R T C _ S T A T E _ R E A D Y ;  
  
         _ _ H A L _ U N L O C K ( h r t c ) ;  
  
         r e t u r n   H A L _ O K ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f     S e t s   t h e   s p e c i f i e d   R T C   A l a r m   w i t h   I n t e r r u p t  
     *   @ p a r a m     h r t c       p o i n t e r   t o   a   R T C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   R T C .  
     *   @ p a r a m     s A l a r m :   P o i n t e r   t o   A l a r m   s t r u c t u r e  
     *   @ p a r a m     F o r m a t :   S p e c i f i e s   t h e   f o r m a t   o f   t h e   e n t e r e d   p a r a m e t e r s .  
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                           @ a r g   R T C _ F O R M A T _ B I N :   B i n a r y   d a t a   f o r m a t  
     *                           @ a r g   R T C _ F O R M A T _ B C D :   B C D   d a t a   f o r m a t  
     *   @ n o t e       T h e   H A L _ R T C _ S e t T i m e ( )   m u s t   b e   c a l l e d   b e f o r e   e n a b l i n g   t h e   A l a r m   f e a t u r e .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ R T C _ S e t A l a r m _ I T ( R T C _ H a n d l e T y p e D e f   * h r t c ,   R T C _ A l a r m T y p e D e f   * s A l a r m ,   u i n t 3 2 _ t   F o r m a t )  
 {  
     u i n t 3 2 _ t   c o u n t e r _ a l a r m   =   0 U ,   c o u n t e r _ t i m e ;  
     R T C _ T i m e T y p e D e f   s t i m e   =   { 0 U } ;  
  
     / *   C h e c k   i n p u t   p a r a m e t e r s   * /  
     i f   ( ( h r t c   = =   N U L L )   | |   ( s A l a r m   = =   N U L L ) )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ R T C _ F O R M A T ( F o r m a t ) ) ;  
     a s s e r t _ p a r a m ( I S _ R T C _ A L A R M ( s A l a r m - > A l a r m ) ) ;  
  
     / *   P r o c e s s   L o c k e d   * /  
     _ _ H A L _ L O C K ( h r t c ) ;  
  
     h r t c - > S t a t e   =   H A L _ R T C _ S T A T E _ B U S Y ;  
  
     / *   C a l l   H A L _ R T C _ G e t T i m e   f u n c t i o n   t o   u p d a t e   d a t e   i f   c o u n t e r   h i g h e r   t h a n   2 4   h o u r s   * /  
     i f   ( H A L _ R T C _ G e t T i m e ( h r t c ,   & s t i m e ,   R T C _ F O R M A T _ B I N )   ! =   H A L _ O K )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     / *   C o n v e r t   t i m e   i n   s e c o n d s   * /  
     c o u n t e r _ t i m e   =   ( u i n t 3 2 _ t ) ( ( ( u i n t 3 2 _ t ) s t i m e . H o u r s   *   3 6 0 0 U )   +   \  
                                                         ( ( u i n t 3 2 _ t ) s t i m e . M i n u t e s   *   6 0 U )   +   \  
                                                         ( ( u i n t 3 2 _ t ) s t i m e . S e c o n d s ) ) ;  
  
     i f   ( F o r m a t   = =   R T C _ F O R M A T _ B I N )  
     {  
         a s s e r t _ p a r a m ( I S _ R T C _ H O U R 2 4 ( s A l a r m - > A l a r m T i m e . H o u r s ) ) ;  
         a s s e r t _ p a r a m ( I S _ R T C _ M I N U T E S ( s A l a r m - > A l a r m T i m e . M i n u t e s ) ) ;  
         a s s e r t _ p a r a m ( I S _ R T C _ S E C O N D S ( s A l a r m - > A l a r m T i m e . S e c o n d s ) ) ;  
  
         c o u n t e r _ a l a r m   =   ( u i n t 3 2 _ t ) ( ( ( u i n t 3 2 _ t ) s A l a r m - > A l a r m T i m e . H o u r s   *   3 6 0 0 U )   +   \  
                                                               ( ( u i n t 3 2 _ t ) s A l a r m - > A l a r m T i m e . M i n u t e s   *   6 0 U )   +   \  
                                                               ( ( u i n t 3 2 _ t ) s A l a r m - > A l a r m T i m e . S e c o n d s ) ) ;  
     }  
     e l s e  
     {  
         a s s e r t _ p a r a m ( I S _ R T C _ H O U R 2 4 ( R T C _ B c d 2 T o B y t e ( s A l a r m - > A l a r m T i m e . H o u r s ) ) ) ;  
         a s s e r t _ p a r a m ( I S _ R T C _ M I N U T E S ( R T C _ B c d 2 T o B y t e ( s A l a r m - > A l a r m T i m e . M i n u t e s ) ) ) ;  
         a s s e r t _ p a r a m ( I S _ R T C _ S E C O N D S ( R T C _ B c d 2 T o B y t e ( s A l a r m - > A l a r m T i m e . S e c o n d s ) ) ) ;  
  
         c o u n t e r _ a l a r m   =   ( ( ( u i n t 3 2 _ t ) ( R T C _ B c d 2 T o B y t e ( s A l a r m - > A l a r m T i m e . H o u r s ) )   *   3 6 0 0 U )   +   \  
                                           ( ( u i n t 3 2 _ t ) ( R T C _ B c d 2 T o B y t e ( s A l a r m - > A l a r m T i m e . M i n u t e s ) )   *   6 0 U )   +   \  
                                           ( ( u i n t 3 2 _ t ) R T C _ B c d 2 T o B y t e ( s A l a r m - > A l a r m T i m e . S e c o n d s ) ) ) ;  
     }  
  
     / *   C h e c k   t h a t   r e q u e s t e d   a l a r m   s h o u l d   e x p i r e   i n   t h e   s a m e   d a y   ( o t h e r w i s e   a d d   1   d a y )   * /  
     i f   ( c o u n t e r _ a l a r m   <   c o u n t e r _ t i m e )  
     {  
         / *   A d d   1   d a y   t o   a l a r m   c o u n t e r * /  
         c o u n t e r _ a l a r m   + =   ( u i n t 3 2 _ t ) ( 2 4 U   *   3 6 0 0 U ) ;  
     }  
  
     / *   W r i t e   a l a r m   c o u n t e r   i n   R T C   r e g i s t e r s   * /  
     i f   ( R T C _ W r i t e A l a r m C o u n t e r ( h r t c ,   c o u n t e r _ a l a r m )   ! =   H A L _ O K )  
     {  
         / *   S e t   R T C   s t a t e   * /  
         h r t c - > S t a t e   =   H A L _ R T C _ S T A T E _ E R R O R ;  
  
         / *   P r o c e s s   U n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h r t c ) ;  
  
         r e t u r n   H A L _ E R R O R ;  
     }  
     e l s e  
     {  
         / *   C l e a r   f l a g   a l a r m   A   * /  
         _ _ H A L _ R T C _ A L A R M _ C L E A R _ F L A G ( h r t c ,   R T C _ F L A G _ A L R A F ) ;  
  
         / *   C o n f i g u r e   t h e   A l a r m   i n t e r r u p t   * /  
         _ _ H A L _ R T C _ A L A R M _ E N A B L E _ I T ( h r t c ,   R T C _ I T _ A L R A ) ;  
  
         / *   R T C   A l a r m   I n t e r r u p t   C o n f i g u r a t i o n :   E X T I   c o n f i g u r a t i o n   * /  
         _ _ H A L _ R T C _ A L A R M _ E X T I _ E N A B L E _ I T ( ) ;  
  
         _ _ H A L _ R T C _ A L A R M _ E X T I _ E N A B L E _ R I S I N G _ E D G E ( ) ;  
  
         h r t c - > S t a t e   =   H A L _ R T C _ S T A T E _ R E A D Y ;  
  
         _ _ H A L _ U N L O C K ( h r t c ) ;  
  
         r e t u r n   H A L _ O K ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f     G e t s   t h e   R T C   A l a r m   v a l u e   a n d   m a s k s .  
     *   @ p a r a m     h r t c       p o i n t e r   t o   a   R T C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   R T C .  
     *   @ p a r a m     s A l a r m :   P o i n t e r   t o   D a t e   s t r u c t u r e  
     *   @ p a r a m     A l a r m :   S p e c i f i e s   t h e   A l a r m .  
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                           @ a r g   R T C _ A L A R M _ A :   A l a r m  
     *   @ p a r a m     F o r m a t :   S p e c i f i e s   t h e   f o r m a t   o f   t h e   e n t e r e d   p a r a m e t e r s .  
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                           @ a r g   R T C _ F O R M A T _ B I N :   B i n a r y   d a t a   f o r m a t  
     *                           @ a r g   R T C _ F O R M A T _ B C D :   B C D   d a t a   f o r m a t  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ R T C _ G e t A l a r m ( R T C _ H a n d l e T y p e D e f   * h r t c ,   R T C _ A l a r m T y p e D e f   * s A l a r m ,   u i n t 3 2 _ t   A l a r m ,   u i n t 3 2 _ t   F o r m a t )  
 {  
     u i n t 3 2 _ t   c o u n t e r _ a l a r m   =   0 U ;  
  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( A l a r m ) ;  
  
     / *   C h e c k   i n p u t   p a r a m e t e r s   * /  
     i f   ( ( h r t c   = =   N U L L )   | |   ( s A l a r m   = =   N U L L ) )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ R T C _ F O R M A T ( F o r m a t ) ) ;  
     a s s e r t _ p a r a m ( I S _ R T C _ A L A R M ( A l a r m ) ) ;  
  
     / *   R e a d   A l a r m   c o u n t e r   i n   R T C   r e g i s t e r s   * /  
     c o u n t e r _ a l a r m   =   R T C _ R e a d A l a r m C o u n t e r ( h r t c ) ;  
  
     / *   F i l l   t h e   s t r u c t u r e   w i t h   t h e   r e a d   p a r a m e t e r s   * /  
     / *   S e t   h o u r s   i n   a   d a y   r a n g e   ( b e t w e e n   0   t o   2 4 ) * /  
     s A l a r m - > A l a r m T i m e . H o u r s       =   ( u i n t 3 2 _ t ) ( ( c o u n t e r _ a l a r m   /   3 6 0 0 U )   %   2 4 U ) ;  
     s A l a r m - > A l a r m T i m e . M i n u t e s   =   ( u i n t 3 2 _ t ) ( ( c o u n t e r _ a l a r m   %   3 6 0 0 U )   /   6 0 U ) ;  
     s A l a r m - > A l a r m T i m e . S e c o n d s   =   ( u i n t 3 2 _ t ) ( ( c o u n t e r _ a l a r m   %   3 6 0 0 U )   %   6 0 U ) ;  
  
     i f   ( F o r m a t   ! =   R T C _ F O R M A T _ B I N )  
     {  
         s A l a r m - > A l a r m T i m e . H o u r s       =   R T C _ B y t e T o B c d 2 ( s A l a r m - > A l a r m T i m e . H o u r s ) ;  
         s A l a r m - > A l a r m T i m e . M i n u t e s   =   R T C _ B y t e T o B c d 2 ( s A l a r m - > A l a r m T i m e . M i n u t e s ) ;  
         s A l a r m - > A l a r m T i m e . S e c o n d s   =   R T C _ B y t e T o B c d 2 ( s A l a r m - > A l a r m T i m e . S e c o n d s ) ;  
     }  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     D e a c t i v e   t h e   s p e c i f i e d   R T C   A l a r m  
     *   @ p a r a m     h r t c       p o i n t e r   t o   a   R T C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   R T C .  
     *   @ p a r a m     A l a r m :   S p e c i f i e s   t h e   A l a r m .  
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   R T C _ A L A R M _ A :     A l a r m A  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ R T C _ D e a c t i v a t e A l a r m ( R T C _ H a n d l e T y p e D e f   * h r t c ,   u i n t 3 2 _ t   A l a r m )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( A l a r m ) ;  
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ R T C _ A L A R M ( A l a r m ) ) ;  
  
     / *   C h e c k   i n p u t   p a r a m e t e r s   * /  
     i f   ( h r t c   = =   N U L L )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     / *   P r o c e s s   L o c k e d   * /  
     _ _ H A L _ L O C K ( h r t c ) ;  
  
     h r t c - > S t a t e   =   H A L _ R T C _ S T A T E _ B U S Y ;  
  
     / *   I n   c a s e   o f   i n t e r r u p t   m o d e   i s   u s e d ,   t h e   i n t e r r u p t   s o u r c e   m u s t   d i s a b l e d   * /  
     _ _ H A L _ R T C _ A L A R M _ D I S A B L E _ I T ( h r t c ,   R T C _ I T _ A L R A ) ;  
  
     / *   S e t   I n i t i a l i z a t i o n   m o d e   * /  
     i f   ( R T C _ E n t e r I n i t M o d e ( h r t c )   ! =   H A L _ O K )  
     {  
         / *   S e t   R T C   s t a t e   * /  
         h r t c - > S t a t e   =   H A L _ R T C _ S T A T E _ E R R O R ;  
  
         / *   P r o c e s s   U n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h r t c ) ;  
  
         r e t u r n   H A L _ E R R O R ;  
     }  
     e l s e  
     {  
         / *   C l e a r   f l a g   a l a r m   A   * /  
         _ _ H A L _ R T C _ A L A R M _ C L E A R _ F L A G ( h r t c ,   R T C _ F L A G _ A L R A F ) ;  
  
         / *   S e t   t o   d e f a u l t   v a l u e s   A L R H   &   A L R L   r e g i s t e r s   * /  
         W R I T E _ R E G ( h r t c - > I n s t a n c e - > A L R H ,   R T C _ A L A R M _ R E S E T V A L U E _ R E G I S T E R ) ;  
         W R I T E _ R E G ( h r t c - > I n s t a n c e - > A L R L ,   R T C _ A L A R M _ R E S E T V A L U E _ R E G I S T E R ) ;  
  
         / *   R T C   A l a r m   I n t e r r u p t   C o n f i g u r a t i o n :   D i s a b l e   E X T I   c o n f i g u r a t i o n   * /  
         _ _ H A L _ R T C _ A L A R M _ E X T I _ D I S A B L E _ I T ( ) ;  
  
         / *   W a i t   f o r   s y n c h r o   * /  
         i f   ( R T C _ E x i t I n i t M o d e ( h r t c )   ! =   H A L _ O K )  
         {  
             h r t c - > S t a t e   =   H A L _ R T C _ S T A T E _ E R R O R ;  
  
             / *   P r o c e s s   U n l o c k e d   * /  
             _ _ H A L _ U N L O C K ( h r t c ) ;  
  
             r e t u r n   H A L _ E R R O R ;  
         }  
     }  
     h r t c - > S t a t e   =   H A L _ R T C _ S T A T E _ R E A D Y ;  
  
     / *   P r o c e s s   U n l o c k e d   * /  
     _ _ H A L _ U N L O C K ( h r t c ) ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     T h i s   f u n c t i o n   h a n d l e s   A l a r m   i n t e r r u p t   r e q u e s t .  
     *   @ p a r a m     h r t c       p o i n t e r   t o   a   R T C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   R T C .  
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   H A L _ R T C _ A l a r m I R Q H a n d l e r ( R T C _ H a n d l e T y p e D e f   * h r t c )  
 {  
     i f   ( _ _ H A L _ R T C _ A L A R M _ G E T _ I T _ S O U R C E ( h r t c ,   R T C _ I T _ A L R A ) )  
     {  
         / *   G e t   t h e   s t a t u s   o f   t h e   I n t e r r u p t   * /  
         i f   ( _ _ H A L _ R T C _ A L A R M _ G E T _ F L A G ( h r t c ,   R T C _ F L A G _ A L R A F )   ! =   ( u i n t 3 2 _ t ) R E S E T )  
         {  
             / *   A l a r m A   c a l l b a c k   * /  
 # i f   ( U S E _ H A L _ R T C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
             h r t c - > A l a r m A E v e n t C a l l b a c k ( h r t c ) ;  
 # e l s e  
             H A L _ R T C _ A l a r m A E v e n t C a l l b a c k ( h r t c ) ;  
 # e n d i f   / *   U S E _ H A L _ R T C _ R E G I S T E R _ C A L L B A C K S   * /  
  
             / *   C l e a r   t h e   A l a r m   i n t e r r u p t   p e n d i n g   b i t   * /  
             _ _ H A L _ R T C _ A L A R M _ C L E A R _ F L A G ( h r t c ,   R T C _ F L A G _ A L R A F ) ;  
         }  
     }  
  
     / *   C l e a r   t h e   E X T I ' s   l i n e   F l a g   f o r   R T C   A l a r m   * /  
     _ _ H A L _ R T C _ A L A R M _ E X T I _ C L E A R _ F L A G ( ) ;  
  
     / *   C h a n g e   R T C   s t a t e   * /  
     h r t c - > S t a t e   =   H A L _ R T C _ S T A T E _ R E A D Y ;  
 }  
  
 / * *  
     *   @ b r i e f     A l a r m   A   c a l l b a c k .  
     *   @ p a r a m     h r t c       p o i n t e r   t o   a   R T C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   R T C .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ R T C _ A l a r m A E v e n t C a l l b a c k ( R T C _ H a n d l e T y p e D e f   * h r t c )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h r t c ) ;  
     / *   N O T E   :   T h i s   f u n c t i o n   S h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ R T C _ A l a r m A E v e n t C a l l b a c k   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ b r i e f     T h i s   f u n c t i o n   h a n d l e s   A l a r m A   P o l l i n g   r e q u e s t .  
     *   @ p a r a m     h r t c       p o i n t e r   t o   a   R T C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   R T C .  
     *   @ p a r a m     T i m e o u t :   T i m e o u t   d u r a t i o n  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ R T C _ P o l l F o r A l a r m A E v e n t ( R T C _ H a n d l e T y p e D e f   * h r t c ,   u i n t 3 2 _ t   T i m e o u t )  
 {  
     u i n t 3 2 _ t   t i c k s t a r t   =   H A L _ G e t T i c k ( ) ;  
  
     / *   C h e c k   i n p u t   p a r a m e t e r s   * /  
     i f   ( h r t c   = =   N U L L )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     w h i l e   ( _ _ H A L _ R T C _ A L A R M _ G E T _ F L A G ( h r t c ,   R T C _ F L A G _ A L R A F )   = =   R E S E T )  
     {  
         i f   ( T i m e o u t   ! =   H A L _ M A X _ D E L A Y )  
         {  
             i f   ( ( T i m e o u t   = =   0 )   | |   ( ( H A L _ G e t T i c k ( )   -   t i c k s t a r t )   >   T i m e o u t ) )  
             {  
                 h r t c - > S t a t e   =   H A L _ R T C _ S T A T E _ T I M E O U T ;  
                 r e t u r n   H A L _ T I M E O U T ;  
             }  
         }  
     }  
  
     / *   C l e a r   t h e   A l a r m   i n t e r r u p t   p e n d i n g   b i t   * /  
     _ _ H A L _ R T C _ A L A R M _ C L E A R _ F L A G ( h r t c ,   R T C _ F L A G _ A L R A F ) ;  
  
     / *   C h a n g e   R T C   s t a t e   * /  
     h r t c - > S t a t e   =   H A L _ R T C _ S T A T E _ R E A D Y ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   R T C _ E x p o r t e d _ F u n c t i o n s _ G r o u p 4   P e r i p h e r a l   S t a t e   f u n c t i o n s  
   *     @ b r i e f       P e r i p h e r a l   S t a t e   f u n c t i o n s  
   *  
 @ v e r b a t i m  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                           # # # # #   P e r i p h e r a l   S t a t e   f u n c t i o n s   # # # # #  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]  
         T h i s   s u b s e c t i o n   p r o v i d e s   f u n c t i o n s   a l l o w i n g   t o  
             ( + )   G e t   R T C   s t a t e  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
 / * *  
     *   @ b r i e f     R e t u r n s   t h e   R T C   s t a t e .  
     *   @ p a r a m     h r t c       p o i n t e r   t o   a   R T C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   R T C .  
     *   @ r e t v a l   H A L   s t a t e  
     * /  
 H A L _ R T C S t a t e T y p e D e f   H A L _ R T C _ G e t S t a t e ( R T C _ H a n d l e T y p e D e f   * h r t c )  
 {  
     r e t u r n   h r t c - > S t a t e ;  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   R T C _ E x p o r t e d _ F u n c t i o n s _ G r o u p 5   P e r i p h e r a l   C o n t r o l   f u n c t i o n s  
   *     @ b r i e f       P e r i p h e r a l   C o n t r o l   f u n c t i o n s  
   *  
 @ v e r b a t i m  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                           # # # # #   P e r i p h e r a l   C o n t r o l   f u n c t i o n s   # # # # #  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]  
         T h i s   s u b s e c t i o n   p r o v i d e s   f u n c t i o n s   a l l o w i n g   t o  
             ( + )   W a i t   f o r   R T C   T i m e   a n d   D a t e   S y n c h r o n i z a t i o n  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     W a i t s   u n t i l   t h e   R T C   r e g i s t e r s   ( R T C _ C N T ,   R T C _ A L R   a n d   R T C _ P R L )  
     *       a r e   s y n c h r o n i z e d   w i t h   R T C   A P B   c l o c k .  
     *   @ n o t e       T h i s   f u n c t i o n   m u s t   b e   c a l l e d   b e f o r e   a n y   r e a d   o p e r a t i o n   a f t e r   a n   A P B   r e s e t  
     *       o r   a n   A P B   c l o c k   s t o p .  
     *   @ p a r a m     h r t c       p o i n t e r   t o   a   R T C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   R T C .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ R T C _ W a i t F o r S y n c h r o ( R T C _ H a n d l e T y p e D e f   * h r t c )  
 {  
     u i n t 3 2 _ t   t i c k s t a r t   =   0 U ;  
  
     / *   C h e c k   i n p u t   p a r a m e t e r s   * /  
     i f   ( h r t c   = =   N U L L )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     / *   C l e a r   R S F   f l a g   * /  
     C L E A R _ B I T ( h r t c - > I n s t a n c e - > C R L ,   R T C _ F L A G _ R S F ) ;  
  
     t i c k s t a r t   =   H A L _ G e t T i c k ( ) ;  
  
     / *   W a i t   t h e   r e g i s t e r s   t o   b e   s y n c h r o n i s e d   * /  
     w h i l e   ( ( h r t c - > I n s t a n c e - > C R L   &   R T C _ F L A G _ R S F )   = =   ( u i n t 3 2 _ t ) R E S E T )  
     {  
         i f   ( ( H A L _ G e t T i c k ( )   -   t i c k s t a r t )   >     R T C _ T I M E O U T _ V A L U E )  
         {  
             r e t u r n   H A L _ T I M E O U T ;  
         }  
     }  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ }  
     * /  
  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ a d d t o g r o u p   R T C _ P r i v a t e _ F u n c t i o n s  
     *   @ {  
     * /  
  
  
 / * *  
     *   @ b r i e f     R e a d   t h e   t i m e   c o u n t e r   a v a i l a b l e   i n   R T C _ C N T   r e g i s t e r s .  
     *   @ p a r a m     h r t c       p o i n t e r   t o   a   R T C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   R T C .  
     *   @ r e t v a l   T i m e   c o u n t e r  
     * /  
 s t a t i c   u i n t 3 2 _ t   R T C _ R e a d T i m e C o u n t e r ( R T C _ H a n d l e T y p e D e f   * h r t c )  
 {  
     u i n t 1 6 _ t   h i g h 1   =   0 U ,   h i g h 2   =   0 U ,   l o w   =   0 U ;  
     u i n t 3 2 _ t   t i m e c o u n t e r   =   0 U ;  
  
     h i g h 1   =   R E A D _ R E G ( h r t c - > I n s t a n c e - > C N T H   &   R T C _ C N T H _ R T C _ C N T ) ;  
     l o w       =   R E A D _ R E G ( h r t c - > I n s t a n c e - > C N T L   &   R T C _ C N T L _ R T C _ C N T ) ;  
     h i g h 2   =   R E A D _ R E G ( h r t c - > I n s t a n c e - > C N T H   &   R T C _ C N T H _ R T C _ C N T ) ;  
  
     i f   ( h i g h 1   ! =   h i g h 2 )  
     {  
         / *   I n   t h i s   c a s e   t h e   c o u n t e r   r o l l   o v e r   d u r i n g   r e a d i n g   o f   C N T L   a n d   C N T H   r e g i s t e r s ,  
               r e a d   a g a i n   C N T L   r e g i s t e r   t h e n   r e t u r n   t h e   c o u n t e r   v a l u e   * /  
         t i m e c o u n t e r   =   ( ( ( u i n t 3 2 _ t )   h i g h 2   < <   1 6 U )   |   R E A D _ R E G ( h r t c - > I n s t a n c e - > C N T L   &   R T C _ C N T L _ R T C _ C N T ) ) ;  
     }  
     e l s e  
     {  
         / *   N o   c o u n t e r   r o l l   o v e r   d u r i n g   r e a d i n g   o f   C N T L   a n d   C N T H   r e g i s t e r s ,   c o u n t e r  
               v a l u e   i s   e q u a l   t o   f i r s t   v a l u e   o f   C N T L   a n d   C N T H   * /  
         t i m e c o u n t e r   =   ( ( ( u i n t 3 2 _ t )   h i g h 1   < <   1 6 U )   |   l o w ) ;  
     }  
  
     r e t u r n   t i m e c o u n t e r ;  
 }  
  
 / * *  
     *   @ b r i e f     W r i t e   t h e   t i m e   c o u n t e r   i n   R T C _ C N T   r e g i s t e r s .  
     *   @ p a r a m     h r t c       p o i n t e r   t o   a   R T C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   R T C .  
     *   @ p a r a m     T i m e C o u n t e r :   C o u n t e r   t o   w r i t e   i n   R T C _ C N T   r e g i s t e r s  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 s t a t i c   H A L _ S t a t u s T y p e D e f   R T C _ W r i t e T i m e C o u n t e r ( R T C _ H a n d l e T y p e D e f   * h r t c ,   u i n t 3 2 _ t   T i m e C o u n t e r )  
 {  
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ O K ;  
  
     / *   S e t   I n i t i a l i z a t i o n   m o d e   * /  
     i f   ( R T C _ E n t e r I n i t M o d e ( h r t c )   ! =   H A L _ O K )  
     {  
         s t a t u s   =   H A L _ E R R O R ;  
     }  
     e l s e  
     {  
         / *   S e t   R T C   C O U N T E R   M S B   w o r d   * /  
         W R I T E _ R E G ( h r t c - > I n s t a n c e - > C N T H ,   ( T i m e C o u n t e r   > >   1 6 U ) ) ;  
         / *   S e t   R T C   C O U N T E R   L S B   w o r d   * /  
         W R I T E _ R E G ( h r t c - > I n s t a n c e - > C N T L ,   ( T i m e C o u n t e r   &   R T C _ C N T L _ R T C _ C N T ) ) ;  
  
         / *   W a i t   f o r   s y n c h r o   * /  
         i f   ( R T C _ E x i t I n i t M o d e ( h r t c )   ! =   H A L _ O K )  
         {  
             s t a t u s   =   H A L _ E R R O R ;  
         }  
     }  
  
     r e t u r n   s t a t u s ;  
 }  
  
 / * *  
     *   @ b r i e f     R e a d   t h e   t i m e   c o u n t e r   a v a i l a b l e   i n   R T C _ A L R   r e g i s t e r s .  
     *   @ p a r a m     h r t c       p o i n t e r   t o   a   R T C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   R T C .  
     *   @ r e t v a l   T i m e   c o u n t e r  
     * /  
 s t a t i c   u i n t 3 2 _ t   R T C _ R e a d A l a r m C o u n t e r ( R T C _ H a n d l e T y p e D e f   * h r t c )  
 {  
     u i n t 1 6 _ t   h i g h 1   =   0 U ,   l o w   =   0 U ;  
  
     h i g h 1   =   R E A D _ R E G ( h r t c - > I n s t a n c e - > A L R H   &   R T C _ C N T H _ R T C _ C N T ) ;  
     l o w       =   R E A D _ R E G ( h r t c - > I n s t a n c e - > A L R L   &   R T C _ C N T L _ R T C _ C N T ) ;  
  
     r e t u r n   ( ( ( u i n t 3 2 _ t )   h i g h 1   < <   1 6 U )   |   l o w ) ;  
 }  
  
 / * *  
     *   @ b r i e f     W r i t e   t h e   t i m e   c o u n t e r   i n   R T C _ A L R   r e g i s t e r s .  
     *   @ p a r a m     h r t c       p o i n t e r   t o   a   R T C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   R T C .  
     *   @ p a r a m     A l a r m C o u n t e r :   C o u n t e r   t o   w r i t e   i n   R T C _ A L R   r e g i s t e r s  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 s t a t i c   H A L _ S t a t u s T y p e D e f   R T C _ W r i t e A l a r m C o u n t e r ( R T C _ H a n d l e T y p e D e f   * h r t c ,   u i n t 3 2 _ t   A l a r m C o u n t e r )  
 {  
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ O K ;  
  
     / *   S e t   I n i t i a l i z a t i o n   m o d e   * /  
     i f   ( R T C _ E n t e r I n i t M o d e ( h r t c )   ! =   H A L _ O K )  
     {  
         s t a t u s   =   H A L _ E R R O R ;  
     }  
     e l s e  
     {  
         / *   S e t   R T C   C O U N T E R   M S B   w o r d   * /  
         W R I T E _ R E G ( h r t c - > I n s t a n c e - > A L R H ,   ( A l a r m C o u n t e r   > >   1 6 U ) ) ;  
         / *   S e t   R T C   C O U N T E R   L S B   w o r d   * /  
         W R I T E _ R E G ( h r t c - > I n s t a n c e - > A L R L ,   ( A l a r m C o u n t e r   &   R T C _ A L R L _ R T C _ A L R ) ) ;  
  
         / *   W a i t   f o r   s y n c h r o   * /  
         i f   ( R T C _ E x i t I n i t M o d e ( h r t c )   ! =   H A L _ O K )  
         {  
             s t a t u s   =   H A L _ E R R O R ;  
         }  
     }  
  
     r e t u r n   s t a t u s ;  
 }  
  
 / * *  
     *   @ b r i e f     E n t e r s   t h e   R T C   I n i t i a l i z a t i o n   m o d e .  
     *   @ p a r a m     h r t c       p o i n t e r   t o   a   R T C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   R T C .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 s t a t i c   H A L _ S t a t u s T y p e D e f   R T C _ E n t e r I n i t M o d e ( R T C _ H a n d l e T y p e D e f   * h r t c )  
 {  
     u i n t 3 2 _ t   t i c k s t a r t   =   0 U ;  
  
     t i c k s t a r t   =   H A L _ G e t T i c k ( ) ;  
     / *   W a i t   t i l l   R T C   i s   i n   I N I T   s t a t e   a n d   i f   T i m e   o u t   i s   r e a c h e d   e x i t   * /  
     w h i l e   ( ( h r t c - > I n s t a n c e - > C R L   &   R T C _ C R L _ R T O F F )   = =   ( u i n t 3 2 _ t ) R E S E T )  
     {  
         i f   ( ( H A L _ G e t T i c k ( )   -   t i c k s t a r t )   >     R T C _ T I M E O U T _ V A L U E )  
         {  
             r e t u r n   H A L _ T I M E O U T ;  
         }  
     }  
  
     / *   D i s a b l e   t h e   w r i t e   p r o t e c t i o n   f o r   R T C   r e g i s t e r s   * /  
     _ _ H A L _ R T C _ W R I T E P R O T E C T I O N _ D I S A B L E ( h r t c ) ;  
  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     E x i t   t h e   R T C   I n i t i a l i z a t i o n   m o d e .  
     *   @ p a r a m     h r t c       p o i n t e r   t o   a   R T C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   R T C .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 s t a t i c   H A L _ S t a t u s T y p e D e f   R T C _ E x i t I n i t M o d e ( R T C _ H a n d l e T y p e D e f   * h r t c )  
 {  
     u i n t 3 2 _ t   t i c k s t a r t   =   0 U ;  
  
     / *   D i s a b l e   t h e   w r i t e   p r o t e c t i o n   f o r   R T C   r e g i s t e r s   * /  
     _ _ H A L _ R T C _ W R I T E P R O T E C T I O N _ E N A B L E ( h r t c ) ;  
  
     t i c k s t a r t   =   H A L _ G e t T i c k ( ) ;  
     / *   W a i t   t i l l   R T C   i s   i n   I N I T   s t a t e   a n d   i f   T i m e   o u t   i s   r e a c h e d   e x i t   * /  
     w h i l e   ( ( h r t c - > I n s t a n c e - > C R L   &   R T C _ C R L _ R T O F F )   = =   ( u i n t 3 2 _ t ) R E S E T )  
     {  
         i f   ( ( H A L _ G e t T i c k ( )   -   t i c k s t a r t )   >     R T C _ T I M E O U T _ V A L U E )  
         {  
             r e t u r n   H A L _ T I M E O U T ;  
         }  
     }  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     C o n v e r t s   a   2   d i g i t   d e c i m a l   t o   B C D   f o r m a t .  
     *   @ p a r a m     V a l u e :   B y t e   t o   b e   c o n v e r t e d  
     *   @ r e t v a l   C o n v e r t e d   b y t e  
     * /  
 s t a t i c   u i n t 8 _ t   R T C _ B y t e T o B c d 2 ( u i n t 8 _ t   V a l u e )  
 {  
     u i n t 3 2 _ t   b c d h i g h   =   0 U ;  
  
     w h i l e   ( V a l u e   > =   1 0 U )  
     {  
         b c d h i g h + + ;  
         V a l u e   - =   1 0 U ;  
     }  
  
     r e t u r n   ( ( u i n t 8 _ t ) ( b c d h i g h   < <   4 U )   |   V a l u e ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C o n v e r t s   f r o m   2   d i g i t   B C D   t o   B i n a r y .  
     *   @ p a r a m     V a l u e :   B C D   v a l u e   t o   b e   c o n v e r t e d  
     *   @ r e t v a l   C o n v e r t e d   w o r d  
     * /  
 s t a t i c   u i n t 8 _ t   R T C _ B c d 2 T o B y t e ( u i n t 8 _ t   V a l u e )  
 {  
     u i n t 3 2 _ t   t m p   =   0 U ;  
     t m p   =   ( ( u i n t 8 _ t ) ( V a l u e   &   ( u i n t 8 _ t ) 0 x F 0 )   > >   ( u i n t 8 _ t ) 0 x 4 )   *   1 0 U ;  
     r e t u r n   ( t m p   +   ( V a l u e   &   ( u i n t 8 _ t ) 0 x 0 F ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     U p d a t e s   d a t e   w h e n   t i m e   i s   2 3 : 5 9 : 5 9 .  
     *   @ p a r a m     h r t c       p o i n t e r   t o   a   R T C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   R T C .  
     *   @ p a r a m     D a y E l a p s e d :   N u m b e r   o f   d a y s   e l a p s e d   f r o m   l a s t   d a t e   u p d a t e  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   R T C _ D a t e U p d a t e ( R T C _ H a n d l e T y p e D e f   * h r t c ,   u i n t 3 2 _ t   D a y E l a p s e d )  
 {  
     u i n t 3 2 _ t   y e a r   =   0 U ,   m o n t h   =   0 U ,   d a y   =   0 U ;  
     u i n t 3 2 _ t   l o o p   =   0 U ;  
  
     / *   G e t   t h e   c u r r e n t   y e a r * /  
     y e a r   =   h r t c - > D a t e T o U p d a t e . Y e a r ;  
  
     / *   G e t   t h e   c u r r e n t   m o n t h   a n d   d a y   * /  
     m o n t h   =   h r t c - > D a t e T o U p d a t e . M o n t h ;  
     d a y   =   h r t c - > D a t e T o U p d a t e . D a t e ;  
  
     f o r   ( l o o p   =   0 U ;   l o o p   <   D a y E l a p s e d ;   l o o p + + )  
     {  
         i f   ( ( m o n t h   = =   1 U )   | |   ( m o n t h   = =   3 U )   | |   ( m o n t h   = =   5 U )   | |   ( m o n t h   = =   7 U )   | |   \  
                 ( m o n t h   = =   8 U )   | |   ( m o n t h   = =   1 0 U )   | |   ( m o n t h   = =   1 2 U ) )  
         {  
             i f   ( d a y   <   3 1 U )  
             {  
                 d a y + + ;  
             }  
             / *   D a t e   s t r u c t u r e   m e m b e r :   d a y   =   3 1   * /  
             e l s e  
             {  
                 i f   ( m o n t h   ! =   1 2 U )  
                 {  
                     m o n t h + + ;  
                     d a y   =   1 U ;  
                 }  
                 / *   D a t e   s t r u c t u r e   m e m b e r :   d a y   =   3 1   &   m o n t h   = 1 2   * /  
                 e l s e  
                 {  
                     m o n t h   =   1 U ;  
                     d a y   =   1 U ;  
                     y e a r + + ;  
                 }  
             }  
         }  
         e l s e   i f   ( ( m o n t h   = =   4 U )   | |   ( m o n t h   = =   6 U )   | |   ( m o n t h   = =   9 U )   | |   ( m o n t h   = =   1 1 U ) )  
         {  
             i f   ( d a y   <   3 0 U )  
             {  
                 d a y + + ;  
             }  
             / *   D a t e   s t r u c t u r e   m e m b e r :   d a y   =   3 0   * /  
             e l s e  
             {  
                 m o n t h + + ;  
                 d a y   =   1 U ;  
             }  
         }  
         e l s e   i f   ( m o n t h   = =   2 U )  
         {  
             i f   ( d a y   <   2 8 U )  
             {  
                 d a y + + ;  
             }  
             e l s e   i f   ( d a y   = =   2 8 U )  
             {  
                 / *   L e a p   y e a r   * /  
                 i f   ( R T C _ I s L e a p Y e a r ( y e a r ) )  
                 {  
                     d a y + + ;  
                 }  
                 e l s e  
                 {  
                     m o n t h + + ;  
                     d a y   =   1 U ;  
                 }  
             }  
             e l s e   i f   ( d a y   = =   2 9 U )  
             {  
                 m o n t h + + ;  
                 d a y   =   1 U ;  
             }  
         }  
     }  
  
     / *   U p d a t e   y e a r   * /  
     h r t c - > D a t e T o U p d a t e . Y e a r   =   y e a r ;  
  
     / *   U p d a t e   d a y   a n d   m o n t h   * /  
     h r t c - > D a t e T o U p d a t e . M o n t h   =   m o n t h ;  
     h r t c - > D a t e T o U p d a t e . D a t e   =   d a y ;  
  
     / *   U p d a t e   d a y   o f   t h e   w e e k   * /  
     h r t c - > D a t e T o U p d a t e . W e e k D a y   =   R T C _ W e e k D a y N u m ( y e a r ,   m o n t h ,   d a y ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C h e c k   w h e t h e r   t h e   p a s s e d   y e a r   i s   L e a p   o r   n o t .  
     *   @ p a r a m     n Y e a r     y e a r   t o   c h e c k  
     *   @ r e t v a l   1 :   l e a p   y e a r  
     *                   0 :   n o t   l e a p   y e a r  
     * /  
 s t a t i c   u i n t 8 _ t   R T C _ I s L e a p Y e a r ( u i n t 1 6 _ t   n Y e a r )  
 {  
     i f   ( ( n Y e a r   %   4 U )   ! =   0 U )  
     {  
         r e t u r n   0 U ;  
     }  
  
     i f   ( ( n Y e a r   %   1 0 0 U )   ! =   0 U )  
     {  
         r e t u r n   1 U ;  
     }  
  
     i f   ( ( n Y e a r   %   4 0 0 U )   = =   0 U )  
     {  
         r e t u r n   1 U ;  
     }  
     e l s e  
     {  
         r e t u r n   0 U ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f     D e t e r m i n e s   t h e   w e e k   n u m b e r ,   t h e   d a y   n u m b e r   a n d   t h e   w e e k   d a y   n u m b e r .  
     *   @ p a r a m     n Y e a r       y e a r   t o   c h e c k  
     *   @ p a r a m     n M o n t h     M o n t h   t o   c h e c k  
     *   @ p a r a m     n D a y         D a y   t o   c h e c k  
     *   @ n o t e       D a y   i s   c a l c u l a t e d   w i t h   h y p o t h e s i s   t h a t   y e a r   >   2 0 0 0  
     *   @ r e t v a l   V a l u e   w h i c h   c a n   t a k e   o n e   o f   t h e   f o l l o w i n g   p a r a m e t e r s :  
     *                   @ a r g   R T C _ W E E K D A Y _ M O N D A Y  
     *                   @ a r g   R T C _ W E E K D A Y _ T U E S D A Y  
     *                   @ a r g   R T C _ W E E K D A Y _ W E D N E S D A Y  
     *                   @ a r g   R T C _ W E E K D A Y _ T H U R S D A Y  
     *                   @ a r g   R T C _ W E E K D A Y _ F R I D A Y  
     *                   @ a r g   R T C _ W E E K D A Y _ S A T U R D A Y  
     *                   @ a r g   R T C _ W E E K D A Y _ S U N D A Y  
     * /  
 s t a t i c   u i n t 8 _ t   R T C _ W e e k D a y N u m ( u i n t 3 2 _ t   n Y e a r ,   u i n t 8 _ t   n M o n t h ,   u i n t 8 _ t   n D a y )  
 {  
     u i n t 3 2 _ t   y e a r   =   0 U ,   w e e k d a y   =   0 U ;  
  
     y e a r   =   2 0 0 0 U   +   n Y e a r ;  
  
     i f   ( n M o n t h   <   3 U )  
     {  
         / * D   =   {   [ ( 2 3   x   m o n t h ) / 9 ]   +   d a y   +   4   +   y e a r   +   [ ( y e a r - 1 ) / 4 ]   -   [ ( y e a r - 1 ) / 1 0 0 ]   +   [ ( y e a r - 1 ) / 4 0 0 ]   }   m o d   7 * /  
         w e e k d a y   =   ( ( ( 2 3 U   *   n M o n t h )   /   9 U )   +   n D a y   +   4 U   +   y e a r   +   ( ( y e a r   -   1 U )   /   4 U )   -   ( ( y e a r   -   1 U )   /   1 0 0 U )   +   ( ( y e a r   -   1 U )   /   4 0 0 U ) )   %   7 U ;  
     }  
     e l s e  
     {  
         / * D   =   {   [ ( 2 3   x   m o n t h ) / 9 ]   +   d a y   +   4   +   y e a r   +   [ y e a r / 4 ]   -   [ y e a r / 1 0 0 ]   +   [ y e a r / 4 0 0 ]   -   2   }   m o d   7 * /  
         w e e k d a y   =   ( ( ( 2 3 U   *   n M o n t h )   /   9 U )   +   n D a y   +   4 U   +   y e a r   +   ( y e a r   /   4 U )   -   ( y e a r   /   1 0 0 U )   +   ( y e a r   /   4 0 0 U )   -   2 U )   %   7 U ;  
     }  
  
     r e t u r n   ( u i n t 8 _ t ) w e e k d a y ;  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 # e n d i f   / *   H A L _ R T C _ M O D U L E _ E N A B L E D   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * * * * * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   S T M i c r o e l e c t r o n i c s   * * * * * E N D   O F   F I L E * * * * /  