??/ * *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ f i l e         s t m 3 2 f 1 x x _ h a l _ a d c . c  
     *   @ a u t h o r     M C D   A p p l i c a t i o n   T e a m  
     *   @ b r i e f       T h i s   f i l e   p r o v i d e s   f i r m w a r e   f u n c t i o n s   t o   m a n a g e   t h e   f o l l o w i n g    
     *                     f u n c t i o n a l i t i e s   o f   t h e   A n a l o g   t o   D i g i t a l   C o n v e r t o r   ( A D C )  
     *                     p e r i p h e r a l :  
     *                       +   I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n s  
     *                           + +   I n i t i a l i z a t i o n   a n d   C o n f i g u r a t i o n   o f   A D C  
     *                       +   O p e r a t i o n   f u n c t i o n s  
     *                           + +   S t a r t ,   s t o p ,   g e t   r e s u l t   o f   c o n v e r s i o n s   o f   r e g u l a r  
     *                                 g r o u p ,   u s i n g   3   p o s s i b l e   m o d e s :   p o l l i n g ,   i n t e r r u p t i o n   o r   D M A .  
     *                       +   C o n t r o l   f u n c t i o n s  
     *                           + +   C h a n n e l s   c o n f i g u r a t i o n   o n   r e g u l a r   g r o u p  
     *                           + +   C h a n n e l s   c o n f i g u r a t i o n   o n   i n j e c t e d   g r o u p  
     *                           + +   A n a l o g   W a t c h d o g   c o n f i g u r a t i o n  
     *                       +   S t a t e   f u n c t i o n s  
     *                           + +   A D C   s t a t e   m a c h i n e   m a n a g e m e n t  
     *                           + +   I n t e r r u p t s   a n d   f l a g s   m a n a g e m e n t  
     *                     O t h e r   f u n c t i o n s   ( e x t e n d e d   f u n c t i o n s )   a r e   a v a i l a b l e   i n   f i l e    
     *                     " s t m 3 2 f 1 x x _ h a l _ a d c _ e x . c " .  
     *  
     @ v e r b a t i m  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                           # # # # #   A D C   p e r i p h e r a l   f e a t u r e s   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
     [ . . ]  
     ( + )   1 2 - b i t   r e s o l u t i o n  
  
     ( + )   I n t e r r u p t   g e n e r a t i o n   a t   t h e   e n d   o f   r e g u l a r   c o n v e r s i o n ,   e n d   o f   i n j e c t e d  
             c o n v e r s i o n ,   a n d   i n   c a s e   o f   a n a l o g   w a t c h d o g   o r   o v e r r u n   e v e n t s .  
      
     ( + )   S i n g l e   a n d   c o n t i n u o u s   c o n v e r s i o n   m o d e s .  
      
     ( + )   S c a n   m o d e   f o r   c o n v e r s i o n   o f   s e v e r a l   c h a n n e l s   s e q u e n t i a l l y .  
      
     ( + )   D a t a   a l i g n m e n t   w i t h   i n - b u i l t   d a t a   c o h e r e n c y .  
      
     ( + )   P r o g r a m m a b l e   s a m p l i n g   t i m e   ( c h a n n e l   w i s e )  
      
     ( + )   A D C   c o n v e r s i o n   o f   r e g u l a r   g r o u p   a n d   i n j e c t e d   g r o u p .  
  
     ( + )   E x t e r n a l   t r i g g e r   ( t i m e r   o r   E X T I )    
             f o r   b o t h   r e g u l a r   a n d   i n j e c t e d   g r o u p s .  
  
     ( + )   D M A   r e q u e s t   g e n e r a t i o n   f o r   t r a n s f e r   o f   c o n v e r s i o n s   d a t a   o f   r e g u l a r   g r o u p .  
  
     ( + )   M u l t i m o d e   D u a l   m o d e   ( a v a i l a b l e   o n   d e v i c e s   w i t h   2   A D C s   o r   m o r e ) .  
      
     ( + )   C o n f i g u r a b l e   D M A   d a t a   s t o r a g e   i n   M u l t i m o d e   D u a l   m o d e   ( a v a i l a b l e   o n   d e v i c e s  
             w i t h   2   D C s   o r   m o r e ) .  
      
     ( + )   C o n f i g u r a b l e   d e l a y   b e t w e e n   c o n v e r s i o n s   i n   D u a l   i n t e r l e a v e d   m o d e   ( a v a i l a b l e    
             o n   d e v i c e s   w i t h   2   D C s   o r   m o r e ) .  
      
     ( + )   A D C   c a l i b r a t i o n  
  
     ( + )   A D C   s u p p l y   r e q u i r e m e n t s :   2 . 4   V   t o   3 . 6   V   a t   f u l l   s p e e d   a n d   d o w n   t o   1 . 8   V   a t    
             s l o w e r   s p e e d .  
      
     ( + )   A D C   i n p u t   r a n g e :   f r o m   V r e f -   ( c o n n e c t e d   t o   V s s a )   t o   V r e f +   ( c o n n e c t e d   t o    
             V d d a   o r   t o   a n   e x t e r n a l   v o l t a g e   r e f e r e n c e ) .  
  
  
                                           # # # # #   H o w   t o   u s e   t h i s   d r i v e r   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]  
  
           * * *   C o n f i g u r a t i o n   o f   t o p   l e v e l   p a r a m e t e r s   r e l a t e d   t o   A D C   * * *  
           = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
           [ . . ]  
  
         ( # )   E n a b l e   t h e   A D C   i n t e r f a c e  
             ( + + )   A s   p r e r e q u i s i t e ,   A D C   c l o c k   m u s t   b e   c o n f i g u r e d   a t   R C C   t o p   l e v e l .  
                       C a u t i o n :   O n   S T M 3 2 F 1 ,   A D C   c l o c k   f r e q u e n c y   m a x   i s   1 4 M H z   ( r e f e r  
                                         t o   d e v i c e   d a t a s h e e t ) .  
                                         T h e r e f o r e ,   A D C   c l o c k   p r e s c a l e r   m u s t   b e   c o n f i g u r e d   i n    
                                         f u n c t i o n   o f   A D C   c l o c k   s o u r c e   f r e q u e n c y   t o   r e m a i n   b e l o w  
                                         t h i s   m a x i m u m   f r e q u e n c y .  
                 ( + + )   O n e   c l o c k   s e t t i n g   i s   m a n d a t o r y :  
                           A D C   c l o c k   ( c o r e   c l o c k ,   a l s o   p o s s i b l y   c o n v e r s i o n   c l o c k ) .  
                           ( + + + )   E x a m p l e :  
                                       I n t o   H A L _ A D C _ M s p I n i t ( )   ( r e c o m m e n d e d   c o d e   l o c a t i o n )   o r   w i t h  
                                       o t h e r   d e v i c e   c l o c k   p a r a m e t e r s   c o n f i g u r a t i o n :  
                               ( + + + )   R C C _ P e r i p h C L K I n i t T y p e D e f     P e r i p h C l k I n i t ;  
                               ( + + + )   _ _ A D C 1 _ C L K _ E N A B L E ( ) ;  
                               ( + + + )   P e r i p h C l k I n i t . P e r i p h C l o c k S e l e c t i o n   =   R C C _ P E R I P H C L K _ A D C ;  
                               ( + + + )   P e r i p h C l k I n i t . A d c C l o c k S e l e c t i o n   =   R C C _ A D C P C L K 2 _ D I V 2 ;  
                               ( + + + )   H A L _ R C C E x _ P e r i p h C L K C o n f i g ( & P e r i p h C l k I n i t ) ;  
  
         ( # )   A D C   p i n s   c o n f i g u r a t i o n  
                   ( + + )   E n a b l e   t h e   c l o c k   f o r   t h e   A D C   G P I O s  
                             u s i n g   m a c r o   _ _ H A L _ R C C _ G P I O x _ C L K _ E N A B L E ( )  
                   ( + + )   C o n f i g u r e   t h e s e   A D C   p i n s   i n   a n a l o g   m o d e  
                             u s i n g   f u n c t i o n   H A L _ G P I O _ I n i t ( )  
  
         ( # )   O p t i o n a l l y ,   i n   c a s e   o f   u s a g e   o f   A D C   w i t h   i n t e r r u p t i o n s :  
                   ( + + )   C o n f i g u r e   t h e   N V I C   f o r   A D C  
                             u s i n g   f u n c t i o n   H A L _ N V I C _ E n a b l e I R Q ( A D C x _ I R Q n )  
                   ( + + )   I n s e r t   t h e   A D C   i n t e r r u p t i o n   h a n d l e r   f u n c t i o n   H A L _ A D C _ I R Q H a n d l e r ( )    
                             i n t o   t h e   f u n c t i o n   o f   c o r r e s p o n d i n g   A D C   i n t e r r u p t i o n   v e c t o r    
                             A D C x _ I R Q H a n d l e r ( ) .  
  
         ( # )   O p t i o n a l l y ,   i n   c a s e   o f   u s a g e   o f   D M A :  
                   ( + + )   C o n f i g u r e   t h e   D M A   ( D M A   c h a n n e l ,   m o d e   n o r m a l   o r   c i r c u l a r ,   . . . )  
                             u s i n g   f u n c t i o n   H A L _ D M A _ I n i t ( ) .  
                   ( + + )   C o n f i g u r e   t h e   N V I C   f o r   D M A  
                             u s i n g   f u n c t i o n   H A L _ N V I C _ E n a b l e I R Q ( D M A x _ C h a n n e l x _ I R Q n )  
                   ( + + )   I n s e r t   t h e   A D C   i n t e r r u p t i o n   h a n d l e r   f u n c t i o n   H A L _ A D C _ I R Q H a n d l e r ( )    
                             i n t o   t h e   f u n c t i o n   o f   c o r r e s p o n d i n g   D M A   i n t e r r u p t i o n   v e c t o r    
                             D M A x _ C h a n n e l x _ I R Q H a n d l e r ( ) .  
  
           * * *   C o n f i g u r a t i o n   o f   A D C ,   g r o u p s   r e g u l a r / i n j e c t e d ,   c h a n n e l s   p a r a m e t e r s   * * *  
           = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
           [ . . ]  
  
         ( # )   C o n f i g u r e   t h e   A D C   p a r a m e t e r s   ( r e s o l u t i o n ,   d a t a   a l i g n m e n t ,   . . . )  
                 a n d   r e g u l a r   g r o u p   p a r a m e t e r s   ( c o n v e r s i o n   t r i g g e r ,   s e q u e n c e r ,   . . . )  
                 u s i n g   f u n c t i o n   H A L _ A D C _ I n i t ( ) .  
  
         ( # )   C o n f i g u r e   t h e   c h a n n e l s   f o r   r e g u l a r   g r o u p   p a r a m e t e r s   ( c h a n n e l   n u m b e r ,    
                 c h a n n e l   r a n k   i n t o   s e q u e n c e r ,   . . . ,   i n t o   r e g u l a r   g r o u p )  
                 u s i n g   f u n c t i o n   H A L _ A D C _ C o n f i g C h a n n e l ( ) .  
  
         ( # )   O p t i o n a l l y ,   c o n f i g u r e   t h e   i n j e c t e d   g r o u p   p a r a m e t e r s   ( c o n v e r s i o n   t r i g g e r ,    
                 s e q u e n c e r ,   . . . ,   o f   i n j e c t e d   g r o u p )  
                 a n d   t h e   c h a n n e l s   f o r   i n j e c t e d   g r o u p   p a r a m e t e r s   ( c h a n n e l   n u m b e r ,    
                 c h a n n e l   r a n k   i n t o   s e q u e n c e r ,   . . . ,   i n t o   i n j e c t e d   g r o u p )  
                 u s i n g   f u n c t i o n   H A L _ A D C E x _ I n j e c t e d C o n f i g C h a n n e l ( ) .  
  
         ( # )   O p t i o n a l l y ,   c o n f i g u r e   t h e   a n a l o g   w a t c h d o g   p a r a m e t e r s   ( c h a n n e l s  
                 m o n i t o r e d ,   t h r e s h o l d s ,   . . . )  
                 u s i n g   f u n c t i o n   H A L _ A D C _ A n a l o g W D G C o n f i g ( ) .  
  
         ( # )   O p t i o n a l l y ,   f o r   d e v i c e s   w i t h   s e v e r a l   A D C   i n s t a n c e s :   c o n f i g u r e   t h e    
                 m u l t i m o d e   p a r a m e t e r s  
                 u s i n g   f u n c t i o n   H A L _ A D C E x _ M u l t i M o d e C o n f i g C h a n n e l ( ) .  
  
           * * *   E x e c u t i o n   o f   A D C   c o n v e r s i o n s   * * *  
           = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
           [ . . ]  
  
         ( # )   O p t i o n a l l y ,   p e r f o r m   a n   a u t o m a t i c   A D C   c a l i b r a t i o n   t o   i m p r o v e   t h e  
                 c o n v e r s i o n   a c c u r a c y  
                 u s i n g   f u n c t i o n   H A L _ A D C E x _ C a l i b r a t i o n _ S t a r t ( ) .  
  
         ( # )   A D C   d r i v e r   c a n   b e   u s e d   a m o n g   t h r e e   m o d e s :   p o l l i n g ,   i n t e r r u p t i o n ,  
                 t r a n s f e r   b y   D M A .  
  
                 ( + + )   A D C   c o n v e r s i o n   b y   p o l l i n g :  
                     ( + + + )   A c t i v a t e   t h e   A D C   p e r i p h e r a l   a n d   s t a r t   c o n v e r s i o n s  
                                 u s i n g   f u n c t i o n   H A L _ A D C _ S t a r t ( )  
                     ( + + + )   W a i t   f o r   A D C   c o n v e r s i o n   c o m p l e t i o n    
                                 u s i n g   f u n c t i o n   H A L _ A D C _ P o l l F o r C o n v e r s i o n ( )  
                                 ( o r   f o r   i n j e c t e d   g r o u p :   H A L _ A D C E x _ I n j e c t e d P o l l F o r C o n v e r s i o n ( )   )  
                     ( + + + )   R e t r i e v e   c o n v e r s i o n   r e s u l t s    
                                 u s i n g   f u n c t i o n   H A L _ A D C _ G e t V a l u e ( )  
                                 ( o r   f o r   i n j e c t e d   g r o u p :   H A L _ A D C E x _ I n j e c t e d G e t V a l u e ( )   )  
                     ( + + + )   S t o p   c o n v e r s i o n   a n d   d i s a b l e   t h e   A D C   p e r i p h e r a l    
                                 u s i n g   f u n c t i o n   H A L _ A D C _ S t o p ( )  
  
                 ( + + )   A D C   c o n v e r s i o n   b y   i n t e r r u p t i o n :    
                     ( + + + )   A c t i v a t e   t h e   A D C   p e r i p h e r a l   a n d   s t a r t   c o n v e r s i o n s  
                                 u s i n g   f u n c t i o n   H A L _ A D C _ S t a r t _ I T ( )  
                     ( + + + )   W a i t   f o r   A D C   c o n v e r s i o n   c o m p l e t i o n   b y   c a l l   o f   f u n c t i o n  
                                 H A L _ A D C _ C o n v C p l t C a l l b a c k ( )  
                                 ( t h i s   f u n c t i o n   m u s t   b e   i m p l e m e n t e d   i n   u s e r   p r o g r a m )  
                                 ( o r   f o r   i n j e c t e d   g r o u p :   H A L _ A D C E x _ I n j e c t e d C o n v C p l t C a l l b a c k ( )   )  
                     ( + + + )   R e t r i e v e   c o n v e r s i o n   r e s u l t s    
                                 u s i n g   f u n c t i o n   H A L _ A D C _ G e t V a l u e ( )  
                                 ( o r   f o r   i n j e c t e d   g r o u p :   H A L _ A D C E x _ I n j e c t e d G e t V a l u e ( )   )  
                     ( + + + )   S t o p   c o n v e r s i o n   a n d   d i s a b l e   t h e   A D C   p e r i p h e r a l    
                                 u s i n g   f u n c t i o n   H A L _ A D C _ S t o p _ I T ( )  
  
                 ( + + )   A D C   c o n v e r s i o n   w i t h   t r a n s f e r   b y   D M A :  
                     ( + + + )   A c t i v a t e   t h e   A D C   p e r i p h e r a l   a n d   s t a r t   c o n v e r s i o n s  
                                 u s i n g   f u n c t i o n   H A L _ A D C _ S t a r t _ D M A ( )  
                     ( + + + )   W a i t   f o r   A D C   c o n v e r s i o n   c o m p l e t i o n   b y   c a l l   o f   f u n c t i o n  
                                 H A L _ A D C _ C o n v C p l t C a l l b a c k ( )   o r   H A L _ A D C _ C o n v H a l f C p l t C a l l b a c k ( )  
                                 ( t h e s e   f u n c t i o n s   m u s t   b e   i m p l e m e n t e d   i n   u s e r   p r o g r a m )  
                     ( + + + )   C o n v e r s i o n   r e s u l t s   a r e   a u t o m a t i c a l l y   t r a n s f e r r e d   b y   D M A   i n t o  
                                 d e s t i n a t i o n   v a r i a b l e   a d d r e s s .  
                     ( + + + )   S t o p   c o n v e r s i o n   a n d   d i s a b l e   t h e   A D C   p e r i p h e r a l    
                                 u s i n g   f u n c t i o n   H A L _ A D C _ S t o p _ D M A ( )  
  
                 ( + + )   F o r   d e v i c e s   w i t h   s e v e r a l   A D C s :   A D C   m u l t i m o d e   c o n v e r s i o n    
                           w i t h   t r a n s f e r   b y   D M A :  
                     ( + + + )   A c t i v a t e   t h e   A D C   p e r i p h e r a l   ( s l a v e )   a n d   s t a r t   c o n v e r s i o n s  
                                 u s i n g   f u n c t i o n   H A L _ A D C _ S t a r t ( )  
                     ( + + + )   A c t i v a t e   t h e   A D C   p e r i p h e r a l   ( m a s t e r )   a n d   s t a r t   c o n v e r s i o n s  
                                 u s i n g   f u n c t i o n   H A L _ A D C E x _ M u l t i M o d e S t a r t _ D M A ( )  
                     ( + + + )   W a i t   f o r   A D C   c o n v e r s i o n   c o m p l e t i o n   b y   c a l l   o f   f u n c t i o n  
                                 H A L _ A D C _ C o n v C p l t C a l l b a c k ( )   o r   H A L _ A D C _ C o n v H a l f C p l t C a l l b a c k ( )  
                                 ( t h e s e   f u n c t i o n s   m u s t   b e   i m p l e m e n t e d   i n   u s e r   p r o g r a m )  
                     ( + + + )   C o n v e r s i o n   r e s u l t s   a r e   a u t o m a t i c a l l y   t r a n s f e r r e d   b y   D M A   i n t o  
                                 d e s t i n a t i o n   v a r i a b l e   a d d r e s s .  
                     ( + + + )   S t o p   c o n v e r s i o n   a n d   d i s a b l e   t h e   A D C   p e r i p h e r a l   ( m a s t e r )  
                                 u s i n g   f u n c t i o n   H A L _ A D C E x _ M u l t i M o d e S t o p _ D M A ( )  
                     ( + + + )   S t o p   c o n v e r s i o n   a n d   d i s a b l e   t h e   A D C   p e r i p h e r a l   ( s l a v e )  
                                 u s i n g   f u n c t i o n   H A L _ A D C _ S t o p _ I T ( )  
  
           [ . . ]  
  
         ( @ )   C a l l b a c k   f u n c t i o n s   m u s t   b e   i m p l e m e n t e d   i n   u s e r   p r o g r a m :  
             ( + @ )   H A L _ A D C _ E r r o r C a l l b a c k ( )  
             ( + @ )   H A L _ A D C _ L e v e l O u t O f W i n d o w C a l l b a c k ( )   ( c a l l b a c k   o f   a n a l o g   w a t c h d o g )  
             ( + @ )   H A L _ A D C _ C o n v C p l t C a l l b a c k ( )  
             ( + @ )   H A L _ A D C _ C o n v H a l f C p l t C a l l b a c k  
             ( + @ )   H A L _ A D C E x _ I n j e c t e d C o n v C p l t C a l l b a c k ( )  
  
           * * *   D e i n i t i a l i z a t i o n   o f   A D C   * * *  
           = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
           [ . . ]  
  
         ( # )   D i s a b l e   t h e   A D C   i n t e r f a c e  
             ( + + )   A D C   c l o c k   c a n   b e   h a r d   r e s e t   a n d   d i s a b l e d   a t   R C C   t o p   l e v e l .  
                 ( + + )   H a r d   r e s e t   o f   A D C   p e r i p h e r a l s  
                           u s i n g   m a c r o   _ _ A D C x _ F O R C E _ R E S E T ( ) ,   _ _ A D C x _ R E L E A S E _ R E S E T ( ) .  
                 ( + + )   A D C   c l o c k   d i s a b l e  
                           u s i n g   t h e   e q u i v a l e n t   m a c r o / f u n c t i o n s   a s   c o n f i g u r a t i o n   s t e p .  
                           ( + + + )   E x a m p l e :  
                                       I n t o   H A L _ A D C _ M s p D e I n i t ( )   ( r e c o m m e n d e d   c o d e   l o c a t i o n )   o r   w i t h  
                                       o t h e r   d e v i c e   c l o c k   p a r a m e t e r s   c o n f i g u r a t i o n :  
                               ( + + + )   P e r i p h C l k I n i t . P e r i p h C l o c k S e l e c t i o n   =   R C C _ P E R I P H C L K _ A D C  
                               ( + + + )   P e r i p h C l k I n i t . A d c C l o c k S e l e c t i o n   =   R C C _ A D C P L L C L K 2 _ O F F  
                               ( + + + )   H A L _ R C C E x _ P e r i p h C L K C o n f i g ( & P e r i p h C l k I n i t )  
  
         ( # )   A D C   p i n s   c o n f i g u r a t i o n  
                   ( + + )   D i s a b l e   t h e   c l o c k   f o r   t h e   A D C   G P I O s  
                             u s i n g   m a c r o   _ _ H A L _ R C C _ G P I O x _ C L K _ D I S A B L E ( )  
  
         ( # )   O p t i o n a l l y ,   i n   c a s e   o f   u s a g e   o f   A D C   w i t h   i n t e r r u p t i o n s :  
                   ( + + )   D i s a b l e   t h e   N V I C   f o r   A D C  
                             u s i n g   f u n c t i o n   H A L _ N V I C _ E n a b l e I R Q ( A D C x _ I R Q n )  
  
         ( # )   O p t i o n a l l y ,   i n   c a s e   o f   u s a g e   o f   D M A :  
                   ( + + )   D e i n i t i a l i z e   t h e   D M A  
                             u s i n g   f u n c t i o n   H A L _ D M A _ I n i t ( ) .  
                   ( + + )   D i s a b l e   t h e   N V I C   f o r   D M A  
                             u s i n g   f u n c t i o n   H A L _ N V I C _ E n a b l e I R Q ( D M A x _ C h a n n e l x _ I R Q n )  
  
         [ . . ]  
          
         * * *   C a l l b a c k   r e g i s t r a t i o n   * * *  
         = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]  
  
           T h e   c o m p i l a t i o n   f l a g   U S E _ H A L _ A D C _ R E G I S T E R _ C A L L B A C K S ,   w h e n   s e t   t o   1 ,  
           a l l o w s   t h e   u s e r   t o   c o n f i g u r e   d y n a m i c a l l y   t h e   d r i v e r   c a l l b a c k s .  
           U s e   F u n c t i o n s   @ r e f   H A L _ A D C _ R e g i s t e r C a l l b a c k ( )  
           t o   r e g i s t e r   a n   i n t e r r u p t   c a l l b a c k .  
         [ . . ]  
  
           F u n c t i o n   @ r e f   H A L _ A D C _ R e g i s t e r C a l l b a c k ( )   a l l o w s   t o   r e g i s t e r   f o l l o w i n g   c a l l b a c k s :  
               ( + )   C o n v C p l t C a l l b a c k                               :   A D C   c o n v e r s i o n   c o m p l e t e   c a l l b a c k  
               ( + )   C o n v H a l f C p l t C a l l b a c k                       :   A D C   c o n v e r s i o n   D M A   h a l f - t r a n s f e r   c a l l b a c k  
               ( + )   L e v e l O u t O f W i n d o w C a l l b a c k               :   A D C   a n a l o g   w a t c h d o g   1   c a l l b a c k  
               ( + )   E r r o r C a l l b a c k                                     :   A D C   e r r o r   c a l l b a c k  
               ( + )   I n j e c t e d C o n v C p l t C a l l b a c k               :   A D C   g r o u p   i n j e c t e d   c o n v e r s i o n   c o m p l e t e   c a l l b a c k  
               ( + )   M s p I n i t C a l l b a c k                                 :   A D C   M s p   I n i t   c a l l b a c k  
               ( + )   M s p D e I n i t C a l l b a c k                             :   A D C   M s p   D e I n i t   c a l l b a c k  
           T h i s   f u n c t i o n   t a k e s   a s   p a r a m e t e r s   t h e   H A L   p e r i p h e r a l   h a n d l e ,   t h e   C a l l b a c k   I D  
           a n d   a   p o i n t e r   t o   t h e   u s e r   c a l l b a c k   f u n c t i o n .  
         [ . . ]  
  
           U s e   f u n c t i o n   @ r e f   H A L _ A D C _ U n R e g i s t e r C a l l b a c k   t o   r e s e t   a   c a l l b a c k   t o   t h e   d e f a u l t  
           w e a k   f u n c t i o n .  
         [ . . ]  
  
           @ r e f   H A L _ A D C _ U n R e g i s t e r C a l l b a c k   t a k e s   a s   p a r a m e t e r s   t h e   H A L   p e r i p h e r a l   h a n d l e ,  
           a n d   t h e   C a l l b a c k   I D .  
           T h i s   f u n c t i o n   a l l o w s   t o   r e s e t   f o l l o w i n g   c a l l b a c k s :  
               ( + )   C o n v C p l t C a l l b a c k                               :   A D C   c o n v e r s i o n   c o m p l e t e   c a l l b a c k  
               ( + )   C o n v H a l f C p l t C a l l b a c k                       :   A D C   c o n v e r s i o n   D M A   h a l f - t r a n s f e r   c a l l b a c k  
               ( + )   L e v e l O u t O f W i n d o w C a l l b a c k               :   A D C   a n a l o g   w a t c h d o g   1   c a l l b a c k  
               ( + )   E r r o r C a l l b a c k                                     :   A D C   e r r o r   c a l l b a c k  
               ( + )   I n j e c t e d C o n v C p l t C a l l b a c k               :   A D C   g r o u p   i n j e c t e d   c o n v e r s i o n   c o m p l e t e   c a l l b a c k  
               ( + )   M s p I n i t C a l l b a c k                                 :   A D C   M s p   I n i t   c a l l b a c k  
               ( + )   M s p D e I n i t C a l l b a c k                             :   A D C   M s p   D e I n i t   c a l l b a c k  
           [ . . ]  
  
           B y   d e f a u l t ,   a f t e r   t h e   @ r e f   H A L _ A D C _ I n i t ( )   a n d   w h e n   t h e   s t a t e   i s   @ r e f   H A L _ A D C _ S T A T E _ R E S E T  
           a l l   c a l l b a c k s   a r e   s e t   t o   t h e   c o r r e s p o n d i n g   w e a k   f u n c t i o n s :  
           e x a m p l e s   @ r e f   H A L _ A D C _ C o n v C p l t C a l l b a c k ( ) ,   @ r e f   H A L _ A D C _ E r r o r C a l l b a c k ( ) .  
           E x c e p t i o n   d o n e   f o r   M s p I n i t   a n d   M s p D e I n i t   f u n c t i o n s   t h a t   a r e  
           r e s e t   t o   t h e   l e g a c y   w e a k   f u n c t i o n s   i n   t h e   @ r e f   H A L _ A D C _ I n i t ( ) /   @ r e f   H A L _ A D C _ D e I n i t ( )   o n l y   w h e n  
           t h e s e   c a l l b a c k s   a r e   n u l l   ( n o t   r e g i s t e r e d   b e f o r e h a n d ) .  
         [ . . ]  
  
           I f   M s p I n i t   o r   M s p D e I n i t   a r e   n o t   n u l l ,   t h e   @ r e f   H A L _ A D C _ I n i t ( ) /   @ r e f   H A L _ A D C _ D e I n i t ( )  
           k e e p   a n d   u s e   t h e   u s e r   M s p I n i t / M s p D e I n i t   c a l l b a c k s   ( r e g i s t e r e d   b e f o r e h a n d )   w h a t e v e r   t h e   s t a t e .  
           [ . . ]  
  
           C a l l b a c k s   c a n   b e   r e g i s t e r e d / u n r e g i s t e r e d   i n   @ r e f   H A L _ A D C _ S T A T E _ R E A D Y   s t a t e   o n l y .  
           E x c e p t i o n   d o n e   M s p I n i t / M s p D e I n i t   f u n c t i o n s   t h a t   c a n   b e   r e g i s t e r e d / u n r e g i s t e r e d  
           i n   @ r e f   H A L _ A D C _ S T A T E _ R E A D Y   o r   @ r e f   H A L _ A D C _ S T A T E _ R E S E T   s t a t e ,  
           t h u s   r e g i s t e r e d   ( u s e r )   M s p I n i t / D e I n i t   c a l l b a c k s   c a n   b e   u s e d   d u r i n g   t h e   I n i t / D e I n i t .  
         [ . . ]  
  
           T h e n ,   t h e   u s e r   f i r s t   r e g i s t e r s   t h e   M s p I n i t / M s p D e I n i t   u s e r   c a l l b a c k s  
           u s i n g   @ r e f   H A L _ A D C _ R e g i s t e r C a l l b a c k ( )   b e f o r e   c a l l i n g   @ r e f   H A L _ A D C _ D e I n i t ( )  
           o r   @ r e f   H A L _ A D C _ I n i t ( )   f u n c t i o n .  
           [ . . ]  
  
           W h e n   t h e   c o m p i l a t i o n   f l a g   U S E _ H A L _ A D C _ R E G I S T E R _ C A L L B A C K S   i s   s e t   t o   0   o r  
           n o t   d e f i n e d ,   t h e   c a l l b a c k   r e g i s t r a t i o n   f e a t u r e   i s   n o t   a v a i l a b l e   a n d   a l l   c a l l b a c k s  
           a r e   s e t   t o   t h e   c o r r e s p o n d i n g   w e a k   f u n c t i o n s .  
      
     @ e n d v e r b a t i m  
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
 / * *   @ d e f g r o u p   A D C   A D C  
     *   @ b r i e f   A D C   H A L   m o d u l e   d r i v e r  
     *   @ {  
     * /  
  
 # i f d e f   H A L _ A D C _ M O D U L E _ E N A B L E D  
  
 / *   P r i v a t e   t y p e d e f   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   d e f i n e   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   A D C _ P r i v a t e _ C o n s t a n t s   A D C   P r i v a t e   C o n s t a n t s  
     *   @ {  
     * /  
  
     / *   T i m e o u t   v a l u e s   f o r   A D C   e n a b l e   a n d   d i s a b l e   s e t t l i n g   t i m e .                                   * /  
     / *   V a l u e s   d e f i n e d   t o   b e   h i g h e r   t h a n   w o r s t   c a s e s :   l o w   c l o c k s   f r e q ,                       * /  
     / *   m a x i m u m   p r e s c a l e r .                                                                                                               * /  
     / *   E x   o f   p r o f i l e   l o w   f r e q u e n c y   :   C l o c k   s o u r c e   a t   0 . 1   M H z ,   A D C   c l o c k                   * /  
     / *   p r e s c a l e r   4 ,   s a m p l i n g   t i m e   1 2 . 5   A D C   c l o c k   c y c l e s ,   r e s o l u t i o n   1 2   b i t s .         * /  
     / *   U n i t :   m s                                                                                                                                   * /  
     # d e f i n e   A D C _ E N A B L E _ T I M E O U T                             2 U  
     # d e f i n e   A D C _ D I S A B L E _ T I M E O U T                           2 U  
  
     / *   D e l a y   f o r   A D C   s t a b i l i z a t i o n   t i m e .                                                                                 * /  
     / *   M a x i m u m   d e l a y   i s   1 u s   ( r e f e r   t o   d e v i c e   d a t a s h e e t ,   p a r a m e t e r   t S T A B ) .               * /  
     / *   U n i t :   u s                                                                                                                                   * /  
     # d e f i n e   A D C _ S T A B _ D E L A Y _ U S                               1 U  
  
     / *   D e l a y   f o r   t e m p e r a t u r e   s e n s o r   s t a b i l i z a t i o n   t i m e .                                                   * /  
     / *   M a x i m u m   d e l a y   i s   1 0 u s   ( r e f e r   t o   d e v i c e   d a t a s h e e t ,   p a r a m e t e r   t S T A R T ) .           * /  
     / *   U n i t :   u s                                                                                                                                   * /  
     # d e f i n e   A D C _ T E M P S E N S O R _ D E L A Y _ U S                   1 0 U  
  
 / * *  
     *   @ }  
     * /  
  
 / *   P r i v a t e   m a c r o   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   v a r i a b l e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   f u n c t i o n   p r o t o t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   A D C _ P r i v a t e _ F u n c t i o n s   A D C   P r i v a t e   F u n c t i o n s  
     *   @ {  
     * /  
 / * *  
     *   @ }  
     * /  
  
 / *   E x p o r t e d   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / * *   @ d e f g r o u p   A D C _ E x p o r t e d _ F u n c t i o n s   A D C   E x p o r t e d   F u n c t i o n s  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   A D C _ E x p o r t e d _ F u n c t i o n s _ G r o u p 1   I n i t i a l i z a t i o n / d e - i n i t i a l i z a t i o n   f u n c t i o n s    
     *   @ b r i e f         I n i t i a l i z a t i o n   a n d   C o n f i g u r a t i o n   f u n c t i o n s  
     *  
 @ v e r b a t i m          
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                             # # # # #   I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n s   # # # # #  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]     T h i s   s e c t i o n   p r o v i d e s   f u n c t i o n s   a l l o w i n g   t o :  
             ( + )   I n i t i a l i z e   a n d   c o n f i g u r e   t h e   A D C .    
             ( + )   D e - i n i t i a l i z e   t h e   A D C .  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     I n i t i a l i z e s   t h e   A D C   p e r i p h e r a l   a n d   r e g u l a r   g r o u p   a c c o r d i n g   t o      
     *                   p a r a m e t e r s   s p e c i f i e d   i n   s t r u c t u r e   " A D C _ I n i t T y p e D e f " .  
     *   @ n o t e       A s   p r e r e q u i s i t e ,   A D C   c l o c k   m u s t   b e   c o n f i g u r e d   a t   R C C   t o p   l e v e l  
     *                   ( c l o c k   s o u r c e   A P B 2 ) .  
     *                   S e e   c o m m e n t e d   e x a m p l e   c o d e   b e l o w   t h a t   c a n   b e   c o p i e d   a n d   u n c o m m e n t e d    
     *                   i n t o   H A L _ A D C _ M s p I n i t ( ) .  
     *   @ n o t e       P o s s i b i l i t y   t o   u p d a t e   p a r a m e t e r s   o n   t h e   f l y :  
     *                   T h i s   f u n c t i o n   i n i t i a l i z e s   t h e   A D C   M S P   ( H A L _ A D C _ M s p I n i t ( ) )   o n l y   w h e n  
     *                   c o m i n g   f r o m   A D C   s t a t e   r e s e t .   F o l l o w i n g   c a l l s   t o   t h i s   f u n c t i o n   c a n  
     *                   b e   u s e d   t o   r e c o n f i g u r e   s o m e   p a r a m e t e r s   o f   A D C _ I n i t T y p e D e f      
     *                   s t r u c t u r e   o n   t h e   f l y ,   w i t h o u t   m o d i f y i n g   M S P   c o n f i g u r a t i o n .   I f   A D C      
     *                   M S P   h a s   t o   b e   m o d i f i e d   a g a i n ,   H A L _ A D C _ D e I n i t ( )   m u s t   b e   c a l l e d  
     *                   b e f o r e   H A L _ A D C _ I n i t ( ) .  
     *                   T h e   s e t t i n g   o f   t h e s e   p a r a m e t e r s   i s   c o n d i t i o n e d   t o   A D C   s t a t e .  
     *                   F o r   p a r a m e t e r s   c o n s t r a i n t s ,   s e e   c o m m e n t s   o f   s t r u c t u r e    
     *                   " A D C _ I n i t T y p e D e f " .  
     *   @ n o t e       T h i s   f u n c t i o n   c o n f i g u r e s   t h e   A D C   w i t h i n   2   s c o p e s :   s c o p e   o f   e n t i r e    
     *                   A D C   a n d   s c o p e   o f   r e g u l a r   g r o u p .   F o r   p a r a m e t e r s   d e t a i l s ,   s e e   c o m m e n t s    
     *                   o f   s t r u c t u r e   " A D C _ I n i t T y p e D e f " .  
     *   @ p a r a m     h a d c :   A D C   h a n d l e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ A D C _ I n i t ( A D C _ H a n d l e T y p e D e f *   h a d c )  
 {  
     H A L _ S t a t u s T y p e D e f   t m p _ h a l _ s t a t u s   =   H A L _ O K ;  
     u i n t 3 2 _ t   t m p _ c r 1   =   0 U ;  
     u i n t 3 2 _ t   t m p _ c r 2   =   0 U ;  
     u i n t 3 2 _ t   t m p _ s q r 1   =   0 U ;  
      
     / *   C h e c k   A D C   h a n d l e   * /  
     i f ( h a d c   = =   N U L L )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
      
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ A D C _ A L L _ I N S T A N C E ( h a d c - > I n s t a n c e ) ) ;  
     a s s e r t _ p a r a m ( I S _ A D C _ D A T A _ A L I G N ( h a d c - > I n i t . D a t a A l i g n ) ) ;  
     a s s e r t _ p a r a m ( I S _ A D C _ S C A N _ M O D E ( h a d c - > I n i t . S c a n C o n v M o d e ) ) ;  
     a s s e r t _ p a r a m ( I S _ F U N C T I O N A L _ S T A T E ( h a d c - > I n i t . C o n t i n u o u s C o n v M o d e ) ) ;  
     a s s e r t _ p a r a m ( I S _ A D C _ E X T T R I G ( h a d c - > I n i t . E x t e r n a l T r i g C o n v ) ) ;  
      
     i f ( h a d c - > I n i t . S c a n C o n v M o d e   ! =   A D C _ S C A N _ D I S A B L E )  
     {  
         a s s e r t _ p a r a m ( I S _ A D C _ R E G U L A R _ N B _ C O N V ( h a d c - > I n i t . N b r O f C o n v e r s i o n ) ) ;  
         a s s e r t _ p a r a m ( I S _ F U N C T I O N A L _ S T A T E ( h a d c - > I n i t . D i s c o n t i n u o u s C o n v M o d e ) ) ;  
         i f ( h a d c - > I n i t . D i s c o n t i n u o u s C o n v M o d e   ! =   D I S A B L E )  
         {  
             a s s e r t _ p a r a m ( I S _ A D C _ R E G U L A R _ D I S C O N T _ N U M B E R ( h a d c - > I n i t . N b r O f D i s c C o n v e r s i o n ) ) ;  
         }  
     }  
      
     / *   A s   p r e r e q u i s i t e ,   i n t o   H A L _ A D C _ M s p I n i t ( ) ,   A D C   c l o c k   m u s t   b e   c o n f i g u r e d         * /  
     / *   a t   R C C   t o p   l e v e l .                                                                                                                 * /  
     / *   R e f e r   t o   h e a d e r   o f   t h i s   f i l e   f o r   m o r e   d e t a i l s   o n   c l o c k   e n a b l i n g                     * /  
     / *   p r o c e d u r e .                                                                                                                               * /  
  
     / *   A c t i o n s   p e r f o r m e d   o n l y   i f   A D C   i s   c o m i n g   f r o m   s t a t e   r e s e t :                                 * /  
     / *   -   I n i t i a l i z a t i o n   o f   A D C   M S P                                                                                             * /  
     i f   ( h a d c - > S t a t e   = =   H A L _ A D C _ S T A T E _ R E S E T )  
     {  
         / *   I n i t i a l i z e   A D C   e r r o r   c o d e   * /  
         A D C _ C L E A R _ E R R O R C O D E ( h a d c ) ;  
          
         / *   A l l o c a t e   l o c k   r e s o u r c e   a n d   i n i t i a l i z e   i t   * /  
         h a d c - > L o c k   =   H A L _ U N L O C K E D ;  
          
 # i f   ( U S E _ H A L _ A D C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
         / *   I n i t   t h e   A D C   C a l l b a c k   s e t t i n g s   * /  
         h a d c - > C o n v C p l t C a l l b a c k                             =   H A L _ A D C _ C o n v C p l t C a l l b a c k ;                                   / *   L e g a c y   w e a k   c a l l b a c k   * /  
         h a d c - > C o n v H a l f C p l t C a l l b a c k                     =   H A L _ A D C _ C o n v H a l f C p l t C a l l b a c k ;                           / *   L e g a c y   w e a k   c a l l b a c k   * /  
         h a d c - > L e v e l O u t O f W i n d o w C a l l b a c k             =   H A L _ A D C _ L e v e l O u t O f W i n d o w C a l l b a c k ;                   / *   L e g a c y   w e a k   c a l l b a c k   * /  
         h a d c - > E r r o r C a l l b a c k                                   =   H A L _ A D C _ E r r o r C a l l b a c k ;                                         / *   L e g a c y   w e a k   c a l l b a c k   * /  
         h a d c - > I n j e c t e d C o n v C p l t C a l l b a c k             =   H A L _ A D C E x _ I n j e c t e d C o n v C p l t C a l l b a c k ;               / *   L e g a c y   w e a k   c a l l b a c k   * /  
          
         i f   ( h a d c - > M s p I n i t C a l l b a c k   = =   N U L L )  
         {  
             h a d c - > M s p I n i t C a l l b a c k   =   H A L _ A D C _ M s p I n i t ;   / *   L e g a c y   w e a k   M s p I n i t     * /  
         }  
          
         / *   I n i t   t h e   l o w   l e v e l   h a r d w a r e   * /  
         h a d c - > M s p I n i t C a l l b a c k ( h a d c ) ;  
 # e l s e  
         / *   I n i t   t h e   l o w   l e v e l   h a r d w a r e   * /  
         H A L _ A D C _ M s p I n i t ( h a d c ) ;  
 # e n d i f   / *   U S E _ H A L _ A D C _ R E G I S T E R _ C A L L B A C K S   * /  
     }  
      
     / *   S t o p   p o t e n t i a l   c o n v e r s i o n   o n   g o i n g ,   o n   r e g u l a r   a n d   i n j e c t e d   g r o u p s   * /  
     / *   D i s a b l e   A D C   p e r i p h e r a l   * /  
     / *   N o t e :   I n   c a s e   o f   A D C   a l r e a d y   e n a b l e d ,   p r e c a u t i o n   t o   n o t   l a u n c h   a n                 * /  
     / *               u n w a n t e d   c o n v e r s i o n   w h i l e   m o d i f y i n g   r e g i s t e r   C R 2   b y   w r i t i n g   1   t o       * /  
     / *               b i t   A D O N .                                                                                                                     * /  
     t m p _ h a l _ s t a t u s   =   A D C _ C o n v e r s i o n S t o p _ D i s a b l e ( h a d c ) ;  
      
      
     / *   C o n f i g u r a t i o n   o f   A D C   p a r a m e t e r s   i f   p r e v i o u s   p r e l i m i n a r y   a c t i o n s   a r e             * /    
     / *   c o r r e c t l y   c o m p l e t e d .                                                                                                           * /  
     i f   ( H A L _ I S _ B I T _ C L R ( h a d c - > S t a t e ,   H A L _ A D C _ S T A T E _ E R R O R _ I N T E R N A L )   & &  
             ( t m p _ h a l _ s t a t u s   = =   H A L _ O K )                                                                     )  
     {  
         / *   S e t   A D C   s t a t e   * /  
         A D C _ S T A T E _ C L R _ S E T ( h a d c - > S t a t e ,  
                                             H A L _ A D C _ S T A T E _ R E G _ B U S Y   |   H A L _ A D C _ S T A T E _ I N J _ B U S Y ,  
                                             H A L _ A D C _ S T A T E _ B U S Y _ I N T E R N A L ) ;  
          
         / *   S e t   A D C   p a r a m e t e r s   * /  
          
         / *   C o n f i g u r a t i o n   o f   A D C :                                                                                                     * /  
         / *     -   d a t a   a l i g n m e n t                                                                                                             * /  
         / *     -   e x t e r n a l   t r i g g e r   t o   s t a r t   c o n v e r s i o n                                                                 * /  
         / *     -   e x t e r n a l   t r i g g e r   p o l a r i t y   ( a l w a y s   s e t   t o   1 ,   b e c a u s e   n e e d e d   f o r   a l l     * /  
         / *         t r i g g e r s :   e x t e r n a l   t r i g g e r   o f   S W   s t a r t )                                                           * /  
         / *     -   c o n t i n u o u s   c o n v e r s i o n   m o d e                                                                                     * /  
         / *   N o t e :   E x t e r n a l   t r i g g e r   p o l a r i t y   ( A D C _ C R 2 _ E X T T R I G )   i s   s e t   i n t o                     * /  
         / *               H A L _ A D C _ S t a r t _ x x x   f u n c t i o n s   b e c a u s e   i f   s e t   i n   t h i s   f u n c t i o n ,           * /  
         / *               a   c o n v e r s i o n   o n   i n j e c t e d   g r o u p   w o u l d   s t a r t   a   c o n v e r s i o n   a l s o   o n     * /  
         / *               r e g u l a r   g r o u p   a f t e r   A D C   e n a b l i n g .                                                                 * /  
         t m p _ c r 2   | =   ( h a d c - > I n i t . D a t a A l i g n                                                                                     |  
                                 A D C _ C F G R _ E X T S E L ( h a d c ,   h a d c - > I n i t . E x t e r n a l T r i g C o n v )                         |  
                                 A D C _ C R 2 _ C O N T I N U O U S ( ( u i n t 3 2 _ t ) h a d c - > I n i t . C o n t i n u o u s C o n v M o d e )       ) ;  
  
         / *   C o n f i g u r a t i o n   o f   A D C :                                                                                                     * /  
         / *     -   s c a n   m o d e                                                                                                                       * /  
         / *     -   d i s c o n t i n u o u s   m o d e   d i s a b l e / e n a b l e                                                                       * /  
         / *     -   d i s c o n t i n u o u s   m o d e   n u m b e r   o f   c o n v e r s i o n s                                                         * /  
         t m p _ c r 1   | =   ( A D C _ C R 1 _ S C A N _ S E T ( h a d c - > I n i t . S c a n C o n v M o d e ) ) ;  
          
         / *   E n a b l e   d i s c o n t i n u o u s   m o d e   o n l y   i f   c o n t i n u o u s   m o d e   i s   d i s a b l e d   * /  
         / *   N o t e :   I f   p a r a m e t e r   " I n i t . S c a n C o n v M o d e "   i s   s e t   t o   d i s a b l e ,   p a r a m e t e r         * /  
         / *               d i s c o n t i n u o u s   i s   s e t   a n y w a y ,   b u t   w i l l   h a v e   n o   e f f e c t   o n   A D C   H W .     * /  
         i f   ( h a d c - > I n i t . D i s c o n t i n u o u s C o n v M o d e   = =   E N A B L E )  
         {  
             i f   ( h a d c - > I n i t . C o n t i n u o u s C o n v M o d e   = =   D I S A B L E )  
             {  
                 / *   E n a b l e   t h e   s e l e c t e d   A D C   r e g u l a r   d i s c o n t i n u o u s   m o d e   * /  
                 / *   S e t   t h e   n u m b e r   o f   c h a n n e l s   t o   b e   c o n v e r t e d   i n   d i s c o n t i n u o u s   m o d e   * /  
                 S E T _ B I T ( t m p _ c r 1 ,   A D C _ C R 1 _ D I S C E N                                                                                         |  
                                                   A D C _ C R 1 _ D I S C O N T I N U O U S _ N U M ( h a d c - > I n i t . N b r O f D i s c C o n v e r s i o n )     ) ;  
             }  
             e l s e  
             {  
                 / *   A D C   r e g u l a r   g r o u p   s e t t i n g s   c o n t i n u o u s   a n d   s e q u e n c e r   d i s c o n t i n u o u s * /  
                 / *   c a n n o t   b e   e n a b l e d   s i m u l t a n e o u s l y .                                                                 * /  
                  
                 / *   U p d a t e   A D C   s t a t e   m a c h i n e   t o   e r r o r   * /  
                 S E T _ B I T ( h a d c - > S t a t e ,   H A L _ A D C _ S T A T E _ E R R O R _ C O N F I G ) ;  
                  
                 / *   S e t   A D C   e r r o r   c o d e   t o   A D C   I P   i n t e r n a l   e r r o r   * /  
                 S E T _ B I T ( h a d c - > E r r o r C o d e ,   H A L _ A D C _ E R R O R _ I N T E R N A L ) ;  
             }  
         }  
          
         / *   U p d a t e   A D C   c o n f i g u r a t i o n   r e g i s t e r   C R 1   w i t h   p r e v i o u s   s e t t i n g s   * /  
             M O D I F Y _ R E G ( h a d c - > I n s t a n c e - > C R 1 ,  
                                   A D C _ C R 1 _ S C A N         |  
                                   A D C _ C R 1 _ D I S C E N     |  
                                   A D C _ C R 1 _ D I S C N U M         ,  
                                   t m p _ c r 1                           ) ;  
          
         / *   U p d a t e   A D C   c o n f i g u r a t i o n   r e g i s t e r   C R 2   w i t h   p r e v i o u s   s e t t i n g s   * /  
             M O D I F Y _ R E G ( h a d c - > I n s t a n c e - > C R 2 ,  
                                   A D C _ C R 2 _ A L I G N       |  
                                   A D C _ C R 2 _ E X T S E L     |  
                                   A D C _ C R 2 _ E X T T R I G   |  
                                   A D C _ C R 2 _ C O N T               ,  
                                   t m p _ c r 2                           ) ;  
  
         / *   C o n f i g u r a t i o n   o f   r e g u l a r   g r o u p   s e q u e n c e r :                                                             * /  
         / *   -   i f   s c a n   m o d e   i s   d i s a b l e d ,   r e g u l a r   c h a n n e l s   s e q u e n c e   l e n g t h   i s   s e t   t o   * /  
         / *       0 x 0 0 :   1   c h a n n e l   c o n v e r t e d   ( c h a n n e l   o n   r e g u l a r   r a n k   1 )                                 * /  
         / *       P a r a m e t e r   " N b r O f C o n v e r s i o n "   i s   d i s c a r d e d .                                                         * /  
         / *       N o t e :   S c a n   m o d e   i s   p r e s e n t   b y   h a r d w a r e   o n   t h i s   d e v i c e   a n d ,   i f                 * /  
         / *       d i s a b l e d ,   d i s c a r d s   a u t o m a t i c a l l y   n b   o f   c o n v e r s i o n s .   A n y w a y ,   n b   o f         * /  
         / *       c o n v e r s i o n s   i s   f o r c e d   t o   0 x 0 0   f o r   a l i g n m e n t   o v e r   a l l   S T M 3 2   d e v i c e s .     * /  
         / *   -   i f   s c a n   m o d e   i s   e n a b l e d ,   r e g u l a r   c h a n n e l s   s e q u e n c e   l e n g t h   i s   s e t   t o     * /  
         / *       p a r a m e t e r   " N b r O f C o n v e r s i o n "                                                                                     * /  
         i f   ( A D C _ C R 1 _ S C A N _ S E T ( h a d c - > I n i t . S c a n C o n v M o d e )   = =   A D C _ S C A N _ E N A B L E )  
         {  
             t m p _ s q r 1   =   A D C _ S Q R 1 _ L _ S H I F T ( h a d c - > I n i t . N b r O f C o n v e r s i o n ) ;  
         }  
              
         M O D I F Y _ R E G ( h a d c - > I n s t a n c e - > S Q R 1 ,  
                               A D C _ S Q R 1 _ L                     ,  
                               t m p _ s q r 1                           ) ;  
          
         / *   C h e c k   b a c k   t h a t   A D C   r e g i s t e r s   h a v e   e f f e c t i v e l y   b e e n   c o n f i g u r e d   t o             * /  
         / *   e n s u r e   o f   n o   p o t e n t i a l   p r o b l e m   o f   A D C   c o r e   I P   c l o c k i n g .                                 * /  
         / *   C h e c k   t h r o u g h   r e g i s t e r   C R 2   ( e x c l u d i n g   b i t s   s e t   i n   o t h e r   f u n c t i o n s :           * /  
         / *   e x e c u t i o n   c o n t r o l   b i t s   ( A D O N ,   J S W S T A R T ,   S W S T A R T ) ,   r e g u l a r   g r o u p   b i t s       * /  
         / *   ( D M A ) ,   i n j e c t e d   g r o u p   b i t s   ( J E X T T R I G   a n d   J E X T S E L ) ,   c h a n n e l   i n t e r n a l         * /  
         / *   m e a s u r e m e n t   p a t h   b i t   ( T S V R E F E ) .                                                                                 * /  
         i f   ( R E A D _ B I T ( h a d c - > I n s t a n c e - > C R 2 ,   ~ ( A D C _ C R 2 _ A D O N   |   A D C _ C R 2 _ D M A   |  
                                                                                 A D C _ C R 2 _ S W S T A R T   |   A D C _ C R 2 _ J S W S T A R T   |  
                                                                                 A D C _ C R 2 _ J E X T T R I G   |   A D C _ C R 2 _ J E X T S E L   |  
                                                                                 A D C _ C R 2 _ T S V R E F E                                           ) )  
                   = =   t m p _ c r 2 )  
         {  
             / *   S e t   A D C   e r r o r   c o d e   t o   n o n e   * /  
             A D C _ C L E A R _ E R R O R C O D E ( h a d c ) ;  
              
             / *   S e t   t h e   A D C   s t a t e   * /  
             A D C _ S T A T E _ C L R _ S E T ( h a d c - > S t a t e ,  
                                                 H A L _ A D C _ S T A T E _ B U S Y _ I N T E R N A L ,  
                                                 H A L _ A D C _ S T A T E _ R E A D Y ) ;  
         }  
         e l s e  
         {  
             / *   U p d a t e   A D C   s t a t e   m a c h i n e   t o   e r r o r   * /  
             A D C _ S T A T E _ C L R _ S E T ( h a d c - > S t a t e ,  
                                                 H A L _ A D C _ S T A T E _ B U S Y _ I N T E R N A L ,  
                                                 H A L _ A D C _ S T A T E _ E R R O R _ I N T E R N A L ) ;  
              
             / *   S e t   A D C   e r r o r   c o d e   t o   A D C   I P   i n t e r n a l   e r r o r   * /  
             S E T _ B I T ( h a d c - > E r r o r C o d e ,   H A L _ A D C _ E R R O R _ I N T E R N A L ) ;  
              
             t m p _ h a l _ s t a t u s   =   H A L _ E R R O R ;  
         }  
      
     }  
     e l s e  
     {  
         / *   U p d a t e   A D C   s t a t e   m a c h i n e   t o   e r r o r   * /  
         S E T _ B I T ( h a d c - > S t a t e ,   H A L _ A D C _ S T A T E _ E R R O R _ I N T E R N A L ) ;  
                  
         t m p _ h a l _ s t a t u s   =   H A L _ E R R O R ;  
     }  
      
     / *   R e t u r n   f u n c t i o n   s t a t u s   * /  
     r e t u r n   t m p _ h a l _ s t a t u s ;  
 }  
  
 / * *  
     *   @ b r i e f     D e i n i t i a l i z e   t h e   A D C   p e r i p h e r a l   r e g i s t e r s   t o   t h e i r   d e f a u l t   r e s e t  
     *                   v a l u e s ,   w i t h   d e i n i t i a l i z a t i o n   o f   t h e   A D C   M S P .  
     *                   I f   n e e d e d ,   t h e   e x a m p l e   c o d e   c a n   b e   c o p i e d   a n d   u n c o m m e n t e d   i n t o  
     *                   f u n c t i o n   H A L _ A D C _ M s p D e I n i t ( ) .  
     *   @ p a r a m     h a d c :   A D C   h a n d l e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ A D C _ D e I n i t ( A D C _ H a n d l e T y p e D e f *   h a d c )  
 {  
     H A L _ S t a t u s T y p e D e f   t m p _ h a l _ s t a t u s   =   H A L _ O K ;  
      
     / *   C h e c k   A D C   h a n d l e   * /  
     i f ( h a d c   = =   N U L L )  
     {  
           r e t u r n   H A L _ E R R O R ;  
     }  
      
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ A D C _ A L L _ I N S T A N C E ( h a d c - > I n s t a n c e ) ) ;  
      
     / *   S e t   A D C   s t a t e   * /  
     S E T _ B I T ( h a d c - > S t a t e ,   H A L _ A D C _ S T A T E _ B U S Y _ I N T E R N A L ) ;  
      
     / *   S t o p   p o t e n t i a l   c o n v e r s i o n   o n   g o i n g ,   o n   r e g u l a r   a n d   i n j e c t e d   g r o u p s   * /  
     / *   D i s a b l e   A D C   p e r i p h e r a l   * /  
     t m p _ h a l _ s t a t u s   =   A D C _ C o n v e r s i o n S t o p _ D i s a b l e ( h a d c ) ;  
      
      
     / *   C o n f i g u r a t i o n   o f   A D C   p a r a m e t e r s   i f   p r e v i o u s   p r e l i m i n a r y   a c t i o n s   a r e             * /    
     / *   c o r r e c t l y   c o m p l e t e d .                                                                                                           * /  
     i f   ( t m p _ h a l _ s t a t u s   = =   H A L _ O K )  
     {  
         / *   = = = = = = = = = =   R e s e t   A D C   r e g i s t e r s   = = = = = = = = = =   * /  
  
  
  
  
         / *   R e s e t   r e g i s t e r   S R   * /  
         _ _ H A L _ A D C _ C L E A R _ F L A G ( h a d c ,   ( A D C _ F L A G _ A W D   |   A D C _ F L A G _ J E O C   |   A D C _ F L A G _ E O C   |  
                                                                 A D C _ F L A G _ J S T R T   |   A D C _ F L A G _ S T R T ) ) ;  
                                                    
         / *   R e s e t   r e g i s t e r   C R 1   * /  
         C L E A R _ B I T ( h a d c - > I n s t a n c e - > C R 1 ,   ( A D C _ C R 1 _ A W D E N       |   A D C _ C R 1 _ J A W D E N   |   A D C _ C R 1 _ D I S C N U M   |    
                                                                         A D C _ C R 1 _ J D I S C E N   |   A D C _ C R 1 _ D I S C E N   |   A D C _ C R 1 _ J A U T O       |    
                                                                         A D C _ C R 1 _ A W D S G L     |   A D C _ C R 1 _ S C A N       |   A D C _ C R 1 _ J E O C I E     |        
                                                                         A D C _ C R 1 _ A W D I E       |   A D C _ C R 1 _ E O C I E     |   A D C _ C R 1 _ A W D C H         ) ) ;  
          
         / *   R e s e t   r e g i s t e r   C R 2   * /  
         C L E A R _ B I T ( h a d c - > I n s t a n c e - > C R 2 ,   ( A D C _ C R 2 _ T S V R E F E   |   A D C _ C R 2 _ S W S T A R T   |   A D C _ C R 2 _ J S W S T A R T   |    
                                                                         A D C _ C R 2 _ E X T T R I G   |   A D C _ C R 2 _ E X T S E L     |   A D C _ C R 2 _ J E X T T R I G   |      
                                                                         A D C _ C R 2 _ J E X T S E L   |   A D C _ C R 2 _ A L I G N       |   A D C _ C R 2 _ D M A             |                  
                                                                         A D C _ C R 2 _ R S T C A L     |   A D C _ C R 2 _ C A L           |   A D C _ C R 2 _ C O N T           |                      
                                                                         A D C _ C R 2 _ A D O N                                                                                     ) ) ;  
          
         / *   R e s e t   r e g i s t e r   S M P R 1   * /  
         C L E A R _ B I T ( h a d c - > I n s t a n c e - > S M P R 1 ,   ( A D C _ S M P R 1 _ S M P 1 7   |   A D C _ S M P R 1 _ S M P 1 6   |   A D C _ S M P R 1 _ S M P 1 5   |    
                                                                             A D C _ S M P R 1 _ S M P 1 4   |   A D C _ S M P R 1 _ S M P 1 3   |   A D C _ S M P R 1 _ S M P 1 2   |    
                                                                             A D C _ S M P R 1 _ S M P 1 1   |   A D C _ S M P R 1 _ S M P 1 0                                         ) ) ;  
          
         / *   R e s e t   r e g i s t e r   S M P R 2   * /  
         C L E A R _ B I T ( h a d c - > I n s t a n c e - > S M P R 2 ,   ( A D C _ S M P R 2 _ S M P 9   |   A D C _ S M P R 2 _ S M P 8   |   A D C _ S M P R 2 _ S M P 7   |    
                                                                             A D C _ S M P R 2 _ S M P 6   |   A D C _ S M P R 2 _ S M P 5   |   A D C _ S M P R 2 _ S M P 4   |    
                                                                             A D C _ S M P R 2 _ S M P 3   |   A D C _ S M P R 2 _ S M P 2   |   A D C _ S M P R 2 _ S M P 1   |    
                                                                             A D C _ S M P R 2 _ S M P 0                                                                         ) ) ;  
  
         / *   R e s e t   r e g i s t e r   J O F R 1   * /  
         C L E A R _ B I T ( h a d c - > I n s t a n c e - > J O F R 1 ,   A D C _ J O F R 1 _ J O F F S E T 1 ) ;  
         / *   R e s e t   r e g i s t e r   J O F R 2   * /  
         C L E A R _ B I T ( h a d c - > I n s t a n c e - > J O F R 2 ,   A D C _ J O F R 2 _ J O F F S E T 2 ) ;  
         / *   R e s e t   r e g i s t e r   J O F R 3   * /  
         C L E A R _ B I T ( h a d c - > I n s t a n c e - > J O F R 3 ,   A D C _ J O F R 3 _ J O F F S E T 3 ) ;  
         / *   R e s e t   r e g i s t e r   J O F R 4   * /  
         C L E A R _ B I T ( h a d c - > I n s t a n c e - > J O F R 4 ,   A D C _ J O F R 4 _ J O F F S E T 4 ) ;  
          
         / *   R e s e t   r e g i s t e r   H T R   * /  
         C L E A R _ B I T ( h a d c - > I n s t a n c e - > H T R ,   A D C _ H T R _ H T ) ;  
         / *   R e s e t   r e g i s t e r   L T R   * /  
         C L E A R _ B I T ( h a d c - > I n s t a n c e - > L T R ,   A D C _ L T R _ L T ) ;  
          
         / *   R e s e t   r e g i s t e r   S Q R 1   * /  
         C L E A R _ B I T ( h a d c - > I n s t a n c e - > S Q R 1 ,   A D C _ S Q R 1 _ L         |  
                                                                         A D C _ S Q R 1 _ S Q 1 6   |   A D C _ S Q R 1 _ S Q 1 5   |    
                                                                         A D C _ S Q R 1 _ S Q 1 4   |   A D C _ S Q R 1 _ S Q 1 3     ) ;  
          
         / *   R e s e t   r e g i s t e r   S Q R 1   * /  
         C L E A R _ B I T ( h a d c - > I n s t a n c e - > S Q R 1 ,   A D C _ S Q R 1 _ L         |  
                                                                         A D C _ S Q R 1 _ S Q 1 6   |   A D C _ S Q R 1 _ S Q 1 5   |    
                                                                         A D C _ S Q R 1 _ S Q 1 4   |   A D C _ S Q R 1 _ S Q 1 3     ) ;  
          
         / *   R e s e t   r e g i s t e r   S Q R 2   * /  
         C L E A R _ B I T ( h a d c - > I n s t a n c e - > S Q R 2 ,   A D C _ S Q R 2 _ S Q 1 2   |   A D C _ S Q R 2 _ S Q 1 1   |   A D C _ S Q R 2 _ S Q 1 0   |    
                                                                         A D C _ S Q R 2 _ S Q 9     |   A D C _ S Q R 2 _ S Q 8     |   A D C _ S Q R 2 _ S Q 7       ) ;  
          
         / *   R e s e t   r e g i s t e r   S Q R 3   * /  
         C L E A R _ B I T ( h a d c - > I n s t a n c e - > S Q R 3 ,   A D C _ S Q R 3 _ S Q 6   |   A D C _ S Q R 3 _ S Q 5   |   A D C _ S Q R 3 _ S Q 4   |    
                                                                         A D C _ S Q R 3 _ S Q 3   |   A D C _ S Q R 3 _ S Q 2   |   A D C _ S Q R 3 _ S Q 1     ) ;  
          
         / *   R e s e t   r e g i s t e r   J S Q R   * /  
         C L E A R _ B I T ( h a d c - > I n s t a n c e - > J S Q R ,   A D C _ J S Q R _ J L   |  
                                                                         A D C _ J S Q R _ J S Q 4   |   A D C _ J S Q R _ J S Q 3   |    
                                                                         A D C _ J S Q R _ J S Q 2   |   A D C _ J S Q R _ J S Q 1     ) ;  
          
         / *   R e s e t   r e g i s t e r   J S Q R   * /  
         C L E A R _ B I T ( h a d c - > I n s t a n c e - > J S Q R ,   A D C _ J S Q R _ J L   |  
                                                                         A D C _ J S Q R _ J S Q 4   |   A D C _ J S Q R _ J S Q 3   |    
                                                                         A D C _ J S Q R _ J S Q 2   |   A D C _ J S Q R _ J S Q 1     ) ;  
          
         / *   R e s e t   r e g i s t e r   D R   * /  
         / *   b i t s   i n   a c c e s s   m o d e   r e a d   o n l y ,   n o   d i r e c t   r e s e t   a p p l i c a b l e * /  
          
         / *   R e s e t   r e g i s t e r s   J D R 1 ,   J D R 2 ,   J D R 3 ,   J D R 4   * /  
         / *   b i t s   i n   a c c e s s   m o d e   r e a d   o n l y ,   n o   d i r e c t   r e s e t   a p p l i c a b l e * /  
          
         / *   = = = = = = = = = =   H a r d   r e s e t   A D C   p e r i p h e r a l   = = = = = = = = = =   * /  
         / *   P e r f o r m s   a   g l o b a l   r e s e t   o f   t h e   e n t i r e   A D C   p e r i p h e r a l :   A D C   s t a t e   i s           * /  
         / *   f o r c e d   t o   a   s i m i l a r   s t a t e   a f t e r   d e v i c e   p o w e r - o n .                                               * /  
         / *   I f   n e e d e d ,   c o p y - p a s t e   a n d   u n c o m m e n t   t h e   f o l l o w i n g   r e s e t   c o d e   i n t o             * /  
         / *   f u n c t i o n   " v o i d   H A L _ A D C _ M s p I n i t ( A D C _ H a n d l e T y p e D e f *   h a d c ) " :                             * /  
         / *                                                                                                                                                 * /  
         / *     _ _ H A L _ R C C _ A D C 1 _ F O R C E _ R E S E T ( )                                                                                     * /  
         / *     _ _ H A L _ R C C _ A D C 1 _ R E L E A S E _ R E S E T ( )                                                                                 * /  
          
 # i f   ( U S E _ H A L _ A D C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
         i f   ( h a d c - > M s p D e I n i t C a l l b a c k   = =   N U L L )  
         {  
             h a d c - > M s p D e I n i t C a l l b a c k   =   H A L _ A D C _ M s p D e I n i t ;   / *   L e g a c y   w e a k   M s p D e I n i t     * /  
         }  
          
         / *   D e I n i t   t h e   l o w   l e v e l   h a r d w a r e   * /  
         h a d c - > M s p D e I n i t C a l l b a c k ( h a d c ) ;  
 # e l s e  
         / *   D e I n i t   t h e   l o w   l e v e l   h a r d w a r e   * /  
         H A L _ A D C _ M s p D e I n i t ( h a d c ) ;  
 # e n d i f   / *   U S E _ H A L _ A D C _ R E G I S T E R _ C A L L B A C K S   * /  
          
         / *   S e t   A D C   e r r o r   c o d e   t o   n o n e   * /  
         A D C _ C L E A R _ E R R O R C O D E ( h a d c ) ;  
          
         / *   S e t   A D C   s t a t e   * /  
         h a d c - > S t a t e   =   H A L _ A D C _ S T A T E _ R E S E T ;    
      
     }  
      
     / *   P r o c e s s   u n l o c k e d   * /  
     _ _ H A L _ U N L O C K ( h a d c ) ;  
      
     / *   R e t u r n   f u n c t i o n   s t a t u s   * /  
     r e t u r n   t m p _ h a l _ s t a t u s ;  
 }  
  
 / * *  
     *   @ b r i e f     I n i t i a l i z e s   t h e   A D C   M S P .  
     *   @ p a r a m     h a d c :   A D C   h a n d l e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ A D C _ M s p I n i t ( A D C _ H a n d l e T y p e D e f *   h a d c )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h a d c ) ;  
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d .   W h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         f u n c t i o n   H A L _ A D C _ M s p I n i t   m u s t   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e .  
       * /    
 }  
  
 / * *  
     *   @ b r i e f     D e I n i t i a l i z e s   t h e   A D C   M S P .  
     *   @ p a r a m     h a d c :   A D C   h a n d l e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ A D C _ M s p D e I n i t ( A D C _ H a n d l e T y p e D e f *   h a d c )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h a d c ) ;  
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d .   W h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         f u n c t i o n   H A L _ A D C _ M s p D e I n i t   m u s t   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e .  
       * /    
 }  
  
 # i f   ( U S E _ H A L _ A D C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
 / * *  
     *   @ b r i e f     R e g i s t e r   a   U s e r   A D C   C a l l b a c k  
     *                   T o   b e   u s e d   i n s t e a d   o f   t h e   w e a k   p r e d e f i n e d   c a l l b a c k  
     *   @ p a r a m     h a d c   P o i n t e r   t o   a   A D C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   A D C .  
     *   @ p a r a m     C a l l b a c k I D   I D   o f   t h e   c a l l b a c k   t o   b e   r e g i s t e r e d  
     *                   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                     @ a r g   @ r e f   H A L _ A D C _ C O N V E R S I O N _ C O M P L E T E _ C B _ I D             A D C   c o n v e r s i o n   c o m p l e t e   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ A D C _ C O N V E R S I O N _ H A L F _ C B _ I D                     A D C   c o n v e r s i o n   c o m p l e t e   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ A D C _ L E V E L _ O U T _ O F _ W I N D O W _ 1 _ C B _ I D         A D C   a n a l o g   w a t c h d o g   1   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ A D C _ E R R O R _ C B _ I D                                         A D C   e r r o r   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ A D C _ I N J _ C O N V E R S I O N _ C O M P L E T E _ C B _ I D     A D C   g r o u p   i n j e c t e d   c o n v e r s i o n   c o m p l e t e   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ A D C _ M S P I N I T _ C B _ I D                                     A D C   M s p   I n i t   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ A D C _ M S P D E I N I T _ C B _ I D                                 A D C   M s p   D e I n i t   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ A D C _ M S P I N I T _ C B _ I D   M s p I n i t   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ A D C _ M S P D E I N I T _ C B _ I D   M s p D e I n i t   c a l l b a c k   I D  
     *   @ p a r a m     p C a l l b a c k   p o i n t e r   t o   t h e   C a l l b a c k   f u n c t i o n  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ A D C _ R e g i s t e r C a l l b a c k ( A D C _ H a n d l e T y p e D e f   * h a d c ,   H A L _ A D C _ C a l l b a c k I D T y p e D e f   C a l l b a c k I D ,   p A D C _ C a l l b a c k T y p e D e f   p C a l l b a c k )  
 {  
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ O K ;  
      
     i f   ( p C a l l b a c k   = =   N U L L )  
     {  
         / *   U p d a t e   t h e   e r r o r   c o d e   * /  
         h a d c - > E r r o r C o d e   | =   H A L _ A D C _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
  
         r e t u r n   H A L _ E R R O R ;  
     }  
      
     i f   ( ( h a d c - > S t a t e   &   H A L _ A D C _ S T A T E _ R E A D Y )   ! =   0 )  
     {  
         s w i t c h   ( C a l l b a c k I D )  
         {  
             c a s e   H A L _ A D C _ C O N V E R S I O N _ C O M P L E T E _ C B _ I D   :  
                 h a d c - > C o n v C p l t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
              
             c a s e   H A L _ A D C _ C O N V E R S I O N _ H A L F _ C B _ I D   :  
                 h a d c - > C o n v H a l f C p l t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
              
             c a s e   H A L _ A D C _ L E V E L _ O U T _ O F _ W I N D O W _ 1 _ C B _ I D   :  
                 h a d c - > L e v e l O u t O f W i n d o w C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
              
             c a s e   H A L _ A D C _ E R R O R _ C B _ I D   :  
                 h a d c - > E r r o r C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
              
             c a s e   H A L _ A D C _ I N J _ C O N V E R S I O N _ C O M P L E T E _ C B _ I D   :  
                 h a d c - > I n j e c t e d C o n v C p l t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
              
             c a s e   H A L _ A D C _ M S P I N I T _ C B _ I D   :  
                 h a d c - > M s p I n i t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
              
             c a s e   H A L _ A D C _ M S P D E I N I T _ C B _ I D   :  
                 h a d c - > M s p D e I n i t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
              
             d e f a u l t   :  
                 / *   U p d a t e   t h e   e r r o r   c o d e   * /  
                 h a d c - > E r r o r C o d e   | =   H A L _ A D C _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
  
                 / *   R e t u r n   e r r o r   s t a t u s   * /  
                 s t a t u s   =   H A L _ E R R O R ;  
                 b r e a k ;  
         }  
     }  
     e l s e   i f   ( H A L _ A D C _ S T A T E _ R E S E T   = =   h a d c - > S t a t e )  
     {  
         s w i t c h   ( C a l l b a c k I D )  
         {  
             c a s e   H A L _ A D C _ M S P I N I T _ C B _ I D   :  
                 h a d c - > M s p I n i t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
              
             c a s e   H A L _ A D C _ M S P D E I N I T _ C B _ I D   :  
                 h a d c - > M s p D e I n i t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
              
             d e f a u l t   :  
                 / *   U p d a t e   t h e   e r r o r   c o d e   * /  
                 h a d c - > E r r o r C o d e   | =   H A L _ A D C _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
              
                 / *   R e t u r n   e r r o r   s t a t u s   * /  
                 s t a t u s   =   H A L _ E R R O R ;  
                 b r e a k ;  
         }  
     }  
     e l s e  
     {  
         / *   U p d a t e   t h e   e r r o r   c o d e   * /  
         h a d c - > E r r o r C o d e   | =   H A L _ A D C _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
          
         / *   R e t u r n   e r r o r   s t a t u s   * /  
         s t a t u s   =     H A L _ E R R O R ;  
     }  
      
     r e t u r n   s t a t u s ;  
 }  
  
 / * *  
     *   @ b r i e f     U n r e g i s t e r   a   A D C   C a l l b a c k  
     *                   A D C   c a l l b a c k   i s   r e d i r e c t e d   t o   t h e   w e a k   p r e d e f i n e d   c a l l b a c k  
     *   @ p a r a m     h a d c   P o i n t e r   t o   a   A D C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   A D C .  
     *   @ p a r a m     C a l l b a c k I D   I D   o f   t h e   c a l l b a c k   t o   b e   u n r e g i s t e r e d  
     *                   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                     @ a r g   @ r e f   H A L _ A D C _ C O N V E R S I O N _ C O M P L E T E _ C B _ I D             A D C   c o n v e r s i o n   c o m p l e t e   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ A D C _ C O N V E R S I O N _ H A L F _ C B _ I D                     A D C   c o n v e r s i o n   c o m p l e t e   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ A D C _ L E V E L _ O U T _ O F _ W I N D O W _ 1 _ C B _ I D         A D C   a n a l o g   w a t c h d o g   1   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ A D C _ E R R O R _ C B _ I D                                         A D C   e r r o r   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ A D C _ I N J _ C O N V E R S I O N _ C O M P L E T E _ C B _ I D     A D C   g r o u p   i n j e c t e d   c o n v e r s i o n   c o m p l e t e   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ A D C _ M S P I N I T _ C B _ I D                                     A D C   M s p   I n i t   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ A D C _ M S P D E I N I T _ C B _ I D                                 A D C   M s p   D e I n i t   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ A D C _ M S P I N I T _ C B _ I D   M s p I n i t   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ A D C _ M S P D E I N I T _ C B _ I D   M s p D e I n i t   c a l l b a c k   I D  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ A D C _ U n R e g i s t e r C a l l b a c k ( A D C _ H a n d l e T y p e D e f   * h a d c ,   H A L _ A D C _ C a l l b a c k I D T y p e D e f   C a l l b a c k I D )  
 {  
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ O K ;  
      
     i f   ( ( h a d c - > S t a t e   &   H A L _ A D C _ S T A T E _ R E A D Y )   ! =   0 )  
     {  
         s w i t c h   ( C a l l b a c k I D )  
         {  
             c a s e   H A L _ A D C _ C O N V E R S I O N _ C O M P L E T E _ C B _ I D   :  
                 h a d c - > C o n v C p l t C a l l b a c k   =   H A L _ A D C _ C o n v C p l t C a l l b a c k ;  
                 b r e a k ;  
              
             c a s e   H A L _ A D C _ C O N V E R S I O N _ H A L F _ C B _ I D   :  
                 h a d c - > C o n v H a l f C p l t C a l l b a c k   =   H A L _ A D C _ C o n v H a l f C p l t C a l l b a c k ;  
                 b r e a k ;  
              
             c a s e   H A L _ A D C _ L E V E L _ O U T _ O F _ W I N D O W _ 1 _ C B _ I D   :  
                 h a d c - > L e v e l O u t O f W i n d o w C a l l b a c k   =   H A L _ A D C _ L e v e l O u t O f W i n d o w C a l l b a c k ;  
                 b r e a k ;  
              
             c a s e   H A L _ A D C _ E R R O R _ C B _ I D   :  
                 h a d c - > E r r o r C a l l b a c k   =   H A L _ A D C _ E r r o r C a l l b a c k ;  
                 b r e a k ;  
              
             c a s e   H A L _ A D C _ I N J _ C O N V E R S I O N _ C O M P L E T E _ C B _ I D   :  
                 h a d c - > I n j e c t e d C o n v C p l t C a l l b a c k   =   H A L _ A D C E x _ I n j e c t e d C o n v C p l t C a l l b a c k ;  
                 b r e a k ;  
              
             c a s e   H A L _ A D C _ M S P I N I T _ C B _ I D   :  
                 h a d c - > M s p I n i t C a l l b a c k   =   H A L _ A D C _ M s p I n i t ;   / *   L e g a c y   w e a k   M s p I n i t                             * /  
                 b r e a k ;  
              
             c a s e   H A L _ A D C _ M S P D E I N I T _ C B _ I D   :  
                 h a d c - > M s p D e I n i t C a l l b a c k   =   H A L _ A D C _ M s p D e I n i t ;   / *   L e g a c y   w e a k   M s p D e I n i t                         * /  
                 b r e a k ;  
              
             d e f a u l t   :  
                 / *   U p d a t e   t h e   e r r o r   c o d e   * /  
                 h a d c - > E r r o r C o d e   | =   H A L _ A D C _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
                  
                 / *   R e t u r n   e r r o r   s t a t u s   * /  
                 s t a t u s   =     H A L _ E R R O R ;  
                 b r e a k ;  
         }  
     }  
     e l s e   i f   ( H A L _ A D C _ S T A T E _ R E S E T   = =   h a d c - > S t a t e )  
     {  
         s w i t c h   ( C a l l b a c k I D )  
         {  
             c a s e   H A L _ A D C _ M S P I N I T _ C B _ I D   :  
                 h a d c - > M s p I n i t C a l l b a c k   =   H A L _ A D C _ M s p I n i t ;                                       / *   L e g a c y   w e a k   M s p I n i t                             * /  
                 b r e a k ;  
                  
             c a s e   H A L _ A D C _ M S P D E I N I T _ C B _ I D   :  
                 h a d c - > M s p D e I n i t C a l l b a c k   =   H A L _ A D C _ M s p D e I n i t ;                               / *   L e g a c y   w e a k   M s p D e I n i t                         * /  
                 b r e a k ;  
                  
             d e f a u l t   :  
                 / *   U p d a t e   t h e   e r r o r   c o d e   * /  
                 h a d c - > E r r o r C o d e   | =   H A L _ A D C _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
                  
                 / *   R e t u r n   e r r o r   s t a t u s   * /  
                 s t a t u s   =     H A L _ E R R O R ;  
                 b r e a k ;  
         }  
     }  
     e l s e  
     {  
         / *   U p d a t e   t h e   e r r o r   c o d e   * /  
         h a d c - > E r r o r C o d e   | =   H A L _ A D C _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
          
         / *   R e t u r n   e r r o r   s t a t u s   * /  
         s t a t u s   =     H A L _ E R R O R ;  
     }  
      
     r e t u r n   s t a t u s ;  
 }  
  
 # e n d i f   / *   U S E _ H A L _ A D C _ R E G I S T E R _ C A L L B A C K S   * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   A D C _ E x p o r t e d _ F u n c t i o n s _ G r o u p 2   I O   o p e r a t i o n   f u n c t i o n s  
   *     @ b r i e f         I n p u t   a n d   O u t p u t   o p e r a t i o n   f u n c t i o n s  
   *  
 @ v e r b a t i m        
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                             # # # # #   I O   o p e r a t i o n   f u n c t i o n s   # # # # #  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]     T h i s   s e c t i o n   p r o v i d e s   f u n c t i o n s   a l l o w i n g   t o :  
             ( + )   S t a r t   c o n v e r s i o n   o f   r e g u l a r   g r o u p .  
             ( + )   S t o p   c o n v e r s i o n   o f   r e g u l a r   g r o u p .  
             ( + )   P o l l   f o r   c o n v e r s i o n   c o m p l e t e   o n   r e g u l a r   g r o u p .  
             ( + )   P o l l   f o r   c o n v e r s i o n   e v e n t .  
             ( + )   G e t   r e s u l t   o f   r e g u l a r   c h a n n e l   c o n v e r s i o n .  
             ( + )   S t a r t   c o n v e r s i o n   o f   r e g u l a r   g r o u p   a n d   e n a b l e   i n t e r r u p t i o n s .  
             ( + )   S t o p   c o n v e r s i o n   o f   r e g u l a r   g r o u p   a n d   d i s a b l e   i n t e r r u p t i o n s .  
             ( + )   H a n d l e   A D C   i n t e r r u p t   r e q u e s t  
             ( + )   S t a r t   c o n v e r s i o n   o f   r e g u l a r   g r o u p   a n d   e n a b l e   D M A   t r a n s f e r .  
             ( + )   S t o p   c o n v e r s i o n   o f   r e g u l a r   g r o u p   a n d   d i s a b l e   A D C   D M A   t r a n s f e r .  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     E n a b l e s   A D C ,   s t a r t s   c o n v e r s i o n   o f   r e g u l a r   g r o u p .  
     *                   I n t e r r u p t i o n s   e n a b l e d   i n   t h i s   f u n c t i o n :   N o n e .  
     *   @ p a r a m     h a d c :   A D C   h a n d l e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ A D C _ S t a r t ( A D C _ H a n d l e T y p e D e f *   h a d c )  
 {  
     H A L _ S t a t u s T y p e D e f   t m p _ h a l _ s t a t u s   =   H A L _ O K ;  
      
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ A D C _ A L L _ I N S T A N C E ( h a d c - > I n s t a n c e ) ) ;  
      
     / *   P r o c e s s   l o c k e d   * /  
     _ _ H A L _ L O C K ( h a d c ) ;  
        
     / *   E n a b l e   t h e   A D C   p e r i p h e r a l   * /  
     t m p _ h a l _ s t a t u s   =   A D C _ E n a b l e ( h a d c ) ;  
      
     / *   S t a r t   c o n v e r s i o n   i f   A D C   i s   e f f e c t i v e l y   e n a b l e d   * /  
     i f   ( t m p _ h a l _ s t a t u s   = =   H A L _ O K )  
     {  
         / *   S e t   A D C   s t a t e                                                                                                                     * /  
         / *   -   C l e a r   s t a t e   b i t f i e l d   r e l a t e d   t o   r e g u l a r   g r o u p   c o n v e r s i o n   r e s u l t s           * /  
         / *   -   S e t   s t a t e   b i t f i e l d   r e l a t e d   t o   r e g u l a r   o p e r a t i o n                                             * /  
         A D C _ S T A T E _ C L R _ S E T ( h a d c - > S t a t e ,  
                                             H A L _ A D C _ S T A T E _ R E A D Y   |   H A L _ A D C _ S T A T E _ R E G _ E O C ,  
                                             H A L _ A D C _ S T A T E _ R E G _ B U S Y ) ;  
          
         / *   S e t   g r o u p   i n j e c t e d   s t a t e   ( f r o m   a u t o - i n j e c t i o n )   a n d   m u l t i m o d e   s t a t e           * /  
         / *   f o r   a l l   c a s e s   o f   m u l t i m o d e :   i n d e p e n d e n t   m o d e ,   m u l t i m o d e   A D C   m a s t e r           * /  
         / *   o r   m u l t i m o d e   A D C   s l a v e   ( f o r   d e v i c e s   w i t h   s e v e r a l   A D C s ) :                                 * /  
         i f   ( A D C _ N O N M U L T I M O D E _ O R _ M U L T I M O D E M A S T E R ( h a d c ) )  
         {  
             / *   S e t   A D C   s t a t e   ( A D C   i n d e p e n d e n t   o r   m a s t e r )   * /  
             C L E A R _ B I T ( h a d c - > S t a t e ,   H A L _ A D C _ S T A T E _ M U L T I M O D E _ S L A V E ) ;  
              
             / *   I f   c o n v e r s i o n s   o n   g r o u p   r e g u l a r   a r e   a l s o   t r i g g e r i n g   g r o u p   i n j e c t e d ,     * /  
             / *   u p d a t e   A D C   s t a t e .                                                                                                         * /  
             i f   ( R E A D _ B I T ( h a d c - > I n s t a n c e - > C R 1 ,   A D C _ C R 1 _ J A U T O )   ! =   R E S E T )  
             {  
                 A D C _ S T A T E _ C L R _ S E T ( h a d c - > S t a t e ,   H A L _ A D C _ S T A T E _ I N J _ E O C ,   H A L _ A D C _ S T A T E _ I N J _ B U S Y ) ;      
             }  
         }  
         e l s e  
         {  
             / *   S e t   A D C   s t a t e   ( A D C   s l a v e )   * /  
             S E T _ B I T ( h a d c - > S t a t e ,   H A L _ A D C _ S T A T E _ M U L T I M O D E _ S L A V E ) ;  
              
             / *   I f   c o n v e r s i o n s   o n   g r o u p   r e g u l a r   a r e   a l s o   t r i g g e r i n g   g r o u p   i n j e c t e d ,     * /  
             / *   u p d a t e   A D C   s t a t e .                                                                                                         * /  
             i f   ( A D C _ M U L T I M O D E _ A U T O _ I N J E C T E D ( h a d c ) )  
             {  
                 A D C _ S T A T E _ C L R _ S E T ( h a d c - > S t a t e ,   H A L _ A D C _ S T A T E _ I N J _ E O C ,   H A L _ A D C _ S T A T E _ I N J _ B U S Y ) ;  
             }  
         }  
          
         / *   S t a t e   m a c h i n e   u p d a t e :   C h e c k   i f   a n   i n j e c t e d   c o n v e r s i o n   i s   o n g o i n g   * /  
         i f   ( H A L _ I S _ B I T _ S E T ( h a d c - > S t a t e ,   H A L _ A D C _ S T A T E _ I N J _ B U S Y ) )  
         {  
             / *   R e s e t   A D C   e r r o r   c o d e   f i e l d s   r e l a t e d   t o   c o n v e r s i o n s   o n   g r o u p   r e g u l a r   * /  
             C L E A R _ B I T ( h a d c - > E r r o r C o d e ,   ( H A L _ A D C _ E R R O R _ O V R   |   H A L _ A D C _ E R R O R _ D M A ) ) ;                    
         }  
         e l s e  
         {  
             / *   R e s e t   A D C   a l l   e r r o r   c o d e   f i e l d s   * /  
             A D C _ C L E A R _ E R R O R C O D E ( h a d c ) ;  
         }  
          
         / *   P r o c e s s   u n l o c k e d   * /  
         / *   U n l o c k   b e f o r e   s t a r t i n g   A D C   c o n v e r s i o n s :   i n   c a s e   o f   p o t e n t i a l                       * /  
         / *   i n t e r r u p t i o n ,   t o   l e t   t h e   p r o c e s s   t o   A D C   I R Q   H a n d l e r .                                       * /  
         _ _ H A L _ U N L O C K ( h a d c ) ;  
      
         / *   C l e a r   r e g u l a r   g r o u p   c o n v e r s i o n   f l a g   * /  
         / *   ( T o   e n s u r e   o f   n o   u n k n o w n   s t a t e   f r o m   p o t e n t i a l   p r e v i o u s   A D C   o p e r a t i o n s )   * /  
         _ _ H A L _ A D C _ C L E A R _ F L A G ( h a d c ,   A D C _ F L A G _ E O C ) ;  
          
         / *   E n a b l e   c o n v e r s i o n   o f   r e g u l a r   g r o u p .                                                                         * /  
         / *   I f   s o f t w a r e   s t a r t   h a s   b e e n   s e l e c t e d ,   c o n v e r s i o n   s t a r t s   i m m e d i a t e l y .         * /  
         / *   I f   e x t e r n a l   t r i g g e r   h a s   b e e n   s e l e c t e d ,   c o n v e r s i o n   w i l l   s t a r t   a t   n e x t       * /  
         / *   t r i g g e r   e v e n t .                                                                                                                   * /  
         / *   C a s e   o f   m u l t i m o d e   e n a b l e d :                                                                                           * /    
         / *     -   i f   A D C   i s   s l a v e ,   A D C   i s   e n a b l e d   o n l y   ( c o n v e r s i o n   i s   n o t   s t a r t e d ) .       * /  
         / *     -   i f   A D C   i s   m a s t e r ,   A D C   i s   e n a b l e d   a n d   c o n v e r s i o n   i s   s t a r t e d .                   * /  
         / *   I f   A D C   i s   m a s t e r ,   A D C   i s   e n a b l e d   a n d   c o n v e r s i o n   i s   s t a r t e d .                         * /  
         / *   N o t e :   A l t e r n a t e   t r i g g e r   f o r   s i n g l e   c o n v e r s i o n   c o u l d   b e   t o   f o r c e   a n           * /  
         / *               a d d i t i o n a l   s e t   o f   b i t   A D O N   " h a d c - > I n s t a n c e - > C R 2   | =   A D C _ C R 2 _ A D O N ; " * /  
         i f   ( A D C _ I S _ S O F T W A R E _ S T A R T _ R E G U L A R ( h a d c )             & &  
                 A D C _ N O N M U L T I M O D E _ O R _ M U L T I M O D E M A S T E R ( h a d c )     )  
         {  
             / *   S t a r t   A D C   c o n v e r s i o n   o n   r e g u l a r   g r o u p   w i t h   S W   s t a r t   * /  
             S E T _ B I T ( h a d c - > I n s t a n c e - > C R 2 ,   ( A D C _ C R 2 _ S W S T A R T   |   A D C _ C R 2 _ E X T T R I G ) ) ;  
         }  
         e l s e  
         {  
             / *   S t a r t   A D C   c o n v e r s i o n   o n   r e g u l a r   g r o u p   w i t h   e x t e r n a l   t r i g g e r   * /  
             S E T _ B I T ( h a d c - > I n s t a n c e - > C R 2 ,   A D C _ C R 2 _ E X T T R I G ) ;  
         }  
     }  
     e l s e  
     {  
         / *   P r o c e s s   u n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h a d c ) ;  
     }  
          
     / *   R e t u r n   f u n c t i o n   s t a t u s   * /  
     r e t u r n   t m p _ h a l _ s t a t u s ;  
 }  
  
 / * *  
     *   @ b r i e f     S t o p   A D C   c o n v e r s i o n   o f   r e g u l a r   g r o u p   ( a n d   i n j e c t e d   c h a n n e l s   i n    
     *                   c a s e   o f   a u t o _ i n j e c t i o n   m o d e ) ,   d i s a b l e   A D C   p e r i p h e r a l .  
     *   @ n o t e :     A D C   p e r i p h e r a l   d i s a b l e   i s   f o r c i n g   s t o p   o f   p o t e n t i a l    
     *                   c o n v e r s i o n   o n   i n j e c t e d   g r o u p .   I f   i n j e c t e d   g r o u p   i s   u n d e r   u s e ,   i t  
     *                   s h o u l d   b e   p r e l i m i n a r i l y   s t o p p e d   u s i n g   H A L _ A D C E x _ I n j e c t e d S t o p   f u n c t i o n .  
     *   @ p a r a m     h a d c :   A D C   h a n d l e  
     *   @ r e t v a l   H A L   s t a t u s .  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ A D C _ S t o p ( A D C _ H a n d l e T y p e D e f *   h a d c )  
 {  
     H A L _ S t a t u s T y p e D e f   t m p _ h a l _ s t a t u s   =   H A L _ O K ;  
      
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ A D C _ A L L _ I N S T A N C E ( h a d c - > I n s t a n c e ) ) ;  
            
     / *   P r o c e s s   l o c k e d   * /  
     _ _ H A L _ L O C K ( h a d c ) ;  
      
     / *   S t o p   p o t e n t i a l   c o n v e r s i o n   o n   g o i n g ,   o n   r e g u l a r   a n d   i n j e c t e d   g r o u p s   * /  
     / *   D i s a b l e   A D C   p e r i p h e r a l   * /  
     t m p _ h a l _ s t a t u s   =   A D C _ C o n v e r s i o n S t o p _ D i s a b l e ( h a d c ) ;  
      
     / *   C h e c k   i f   A D C   i s   e f f e c t i v e l y   d i s a b l e d   * /  
     i f   ( t m p _ h a l _ s t a t u s   = =   H A L _ O K )  
     {  
         / *   S e t   A D C   s t a t e   * /  
         A D C _ S T A T E _ C L R _ S E T ( h a d c - > S t a t e ,  
                                             H A L _ A D C _ S T A T E _ R E G _ B U S Y   |   H A L _ A D C _ S T A T E _ I N J _ B U S Y ,  
                                             H A L _ A D C _ S T A T E _ R E A D Y ) ;  
     }  
      
     / *   P r o c e s s   u n l o c k e d   * /  
     _ _ H A L _ U N L O C K ( h a d c ) ;  
      
     / *   R e t u r n   f u n c t i o n   s t a t u s   * /  
     r e t u r n   t m p _ h a l _ s t a t u s ;  
 }  
  
 / * *  
     *   @ b r i e f     W a i t   f o r   r e g u l a r   g r o u p   c o n v e r s i o n   t o   b e   c o m p l e t e d .  
     *   @ n o t e       T h i s   f u n c t i o n   c a n n o t   b e   u s e d   i n   a   p a r t i c u l a r   s e t u p :   A D C   c o n f i g u r e d    
     *                   i n   D M A   m o d e .  
     *                   I n   t h i s   c a s e ,   D M A   r e s e t s   t h e   f l a g   E O C   a n d   p o l l i n g   c a n n o t   b e  
     *                   p e r f o r m e d   o n   e a c h   c o n v e r s i o n .  
     *   @ n o t e       O n   S T M 3 2 F 1   d e v i c e s ,   l i m i t a t i o n   i n   c a s e   o f   s e q u e n c e r   e n a b l e d  
     *                   ( s e v e r a l   r a n k s   s e l e c t e d ) :   p o l l i n g   c a n n o t   b e   d o n e   o n   e a c h    
     *                   c o n v e r s i o n   i n s i d e   t h e   s e q u e n c e .   I n   t h i s   c a s e ,   p o l l i n g   i s   r e p l a c e d   b y  
     *                   w a i t   f o r   m a x i m u m   c o n v e r s i o n   t i m e .  
     *   @ p a r a m     h a d c :   A D C   h a n d l e  
     *   @ p a r a m     T i m e o u t :   T i m e o u t   v a l u e   i n   m i l l i s e c o n d .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ A D C _ P o l l F o r C o n v e r s i o n ( A D C _ H a n d l e T y p e D e f *   h a d c ,   u i n t 3 2 _ t   T i m e o u t )  
 {  
     u i n t 3 2 _ t   t i c k s t a r t   =   0 U ;  
      
     / *   V a r i a b l e s   f o r   p o l l i n g   i n   c a s e   o f   s c a n   m o d e   e n a b l e d   a n d   p o l l i n g   f o r   e a c h     * /  
     / *   c o n v e r s i o n .                                                                                                                             * /  
     _ _ I O   u i n t 3 2 _ t   C o n v e r s i o n _ T i m e o u t _ C P U _ c y c l e s   =   0 U ;  
     u i n t 3 2 _ t   C o n v e r s i o n _ T i m e o u t _ C P U _ c y c l e s _ m a x   =   0 U ;  
    
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ A D C _ A L L _ I N S T A N C E ( h a d c - > I n s t a n c e ) ) ;  
      
     / *   G e t   t i c k   c o u n t   * /  
     t i c k s t a r t   =   H A L _ G e t T i c k ( ) ;  
      
     / *   V e r i f i c a t i o n   t h a t   A D C   c o n f i g u r a t i o n   i s   c o m p l i a n t   w i t h   p o l l i n g   f o r                 * /  
     / *   e a c h   c o n v e r s i o n :                                                                                                                   * /  
     / *   P a r t i c u l a r   c a s e   i s   A D C   c o n f i g u r e d   i n   D M A   m o d e                                                         * /  
     i f   ( H A L _ I S _ B I T _ S E T ( h a d c - > I n s t a n c e - > C R 2 ,   A D C _ C R 2 _ D M A ) )  
     {  
         / *   U p d a t e   A D C   s t a t e   m a c h i n e   t o   e r r o r   * /  
         S E T _ B I T ( h a d c - > S t a t e ,   H A L _ A D C _ S T A T E _ E R R O R _ C O N F I G ) ;  
          
         / *   P r o c e s s   u n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h a d c ) ;  
          
         r e t u r n   H A L _ E R R O R ;  
     }  
      
     / *   P o l l i n g   f o r   e n d   o f   c o n v e r s i o n :   d i f f e r e n t i a t i o n   i f   s i n g l e / s e q u e n c e                 * /  
     / *   c o n v e r s i o n .                                                                                                                             * /  
     / *     -   I f   s i n g l e   c o n v e r s i o n   f o r   r e g u l a r   g r o u p   ( S c a n   m o d e   d i s a b l e d   o r   e n a b l e d   * /  
     / *         w i t h   N b r O f C o n v e r s i o n   = 1 ) ,   f l a g   E O C   i s   u s e d   t o   d e t e r m i n e   t h e                       * /  
     / *         c o n v e r s i o n   c o m p l e t i o n .                                                                                                 * /  
     / *     -   I f   s e q u e n c e   c o n v e r s i o n   f o r   r e g u l a r   g r o u p   ( s c a n   m o d e   e n a b l e d   a n d               * /  
     / *         N b r O f C o n v e r s i o n   > = 2 ) ,   f l a g   E O C   i s   s e t   o n l y   a t   t h e   e n d   o f   t h e                     * /  
     / *         s e q u e n c e .                                                                                                                           * /  
     / *         T o   p o l l   f o r   e a c h   c o n v e r s i o n ,   t h e   m a x i m u m   c o n v e r s i o n   t i m e   i s   c o m p u t e d     * /  
     / *         f r o m   A D C   c o n v e r s i o n   t i m e   ( s e l e c t e d   s a m p l i n g   t i m e   +   c o n v e r s i o n   t i m e   o f   * /  
     / *         1 2 . 5   A D C   c l o c k   c y c l e s )   a n d   A P B 2 / A D C   c l o c k   p r e s c a l e r s   ( d e p e n d i n g   o n         * /  
     / *         s e t t i n g s ,   c o n v e r s i o n   t i m e   r a n g e   c a n   b e   f r o m   2 8   t o   3 2 2 5 6   C P U   c y c l e s ) .     * /  
     / *         A s   f l a g   E O C   i s   n o t   s e t   a f t e r   e a c h   c o n v e r s i o n ,   n o   t i m e o u t   s t a t u s   c a n       * /  
     / *         b e   s e t .                                                                                                                               * /  
     i f   ( H A L _ I S _ B I T _ C L R ( h a d c - > I n s t a n c e - > C R 1 ,   A D C _ C R 1 _ S C A N )   & &  
             H A L _ I S _ B I T _ C L R ( h a d c - > I n s t a n c e - > S Q R 1 ,   A D C _ S Q R 1 _ L )         )  
     {  
         / *   W a i t   u n t i l   E n d   o f   C o n v e r s i o n   f l a g   i s   r a i s e d   * /  
         w h i l e ( H A L _ I S _ B I T _ C L R ( h a d c - > I n s t a n c e - > S R ,   A D C _ F L A G _ E O C ) )  
         {  
             / *   C h e c k   i f   t i m e o u t   i s   d i s a b l e d   ( s e t   t o   i n f i n i t e   w a i t )   * /  
             i f ( T i m e o u t   ! =   H A L _ M A X _ D E L A Y )  
             {  
                 i f ( ( T i m e o u t   = =   0 U )   | |   ( ( H A L _ G e t T i c k ( )   -   t i c k s t a r t   )   >   T i m e o u t ) )  
                 {  
                     / *   N e w   c h e c k   t o   a v o i d   f a l s e   t i m e o u t   d e t e c t i o n   i n   c a s e   o f   p r e e m p t i o n   * /  
                     i f ( H A L _ I S _ B I T _ C L R ( h a d c - > I n s t a n c e - > S R ,   A D C _ F L A G _ E O C ) )  
                     {  
                         / *   U p d a t e   A D C   s t a t e   m a c h i n e   t o   t i m e o u t   * /  
                         S E T _ B I T ( h a d c - > S t a t e ,   H A L _ A D C _ S T A T E _ T I M E O U T ) ;  
                          
                         / *   P r o c e s s   u n l o c k e d   * /  
                         _ _ H A L _ U N L O C K ( h a d c ) ;  
                          
                         r e t u r n   H A L _ T I M E O U T ;  
                     }  
                 }  
             }  
         }  
     }  
     e l s e  
     {  
         / *   R e p l a c e   p o l l i n g   b y   w a i t   f o r   m a x i m u m   c o n v e r s i o n   t i m e   * /  
         / *     -   C o m p u t a t i o n   o f   C P U   c l o c k   c y c l e s   c o r r e s p o n d i n g   t o   A D C   c l o c k   c y c l e s       * /  
         / *         a n d   A D C   m a x i m u m   c o n v e r s i o n   c y c l e s   o n   a l l   c h a n n e l s .                                     * /  
         / *     -   W a i t   f o r   t h e   e x p e c t e d   A D C   c l o c k   c y c l e s   d e l a y                                                 * /  
         C o n v e r s i o n _ T i m e o u t _ C P U _ c y c l e s _ m a x   =   ( ( S y s t e m C o r e C l o c k  
                                                                                     /   H A L _ R C C E x _ G e t P e r i p h C L K F r e q ( R C C _ P E R I P H C L K _ A D C ) )  
                                                                                   *   A D C _ C O N V C Y C L E S _ M A X _ R A N G E ( h a d c )                                   ) ;  
          
         w h i l e ( C o n v e r s i o n _ T i m e o u t _ C P U _ c y c l e s   <   C o n v e r s i o n _ T i m e o u t _ C P U _ c y c l e s _ m a x )  
         {  
             / *   C h e c k   i f   t i m e o u t   i s   d i s a b l e d   ( s e t   t o   i n f i n i t e   w a i t )   * /  
             i f ( T i m e o u t   ! =   H A L _ M A X _ D E L A Y )  
             {  
                 i f ( ( T i m e o u t   = =   0 U )   | |   ( ( H A L _ G e t T i c k ( )   -   t i c k s t a r t )   >   T i m e o u t ) )  
                 {  
                     / *   N e w   c h e c k   t o   a v o i d   f a l s e   t i m e o u t   d e t e c t i o n   i n   c a s e   o f   p r e e m p t i o n   * /  
                     i f ( C o n v e r s i o n _ T i m e o u t _ C P U _ c y c l e s   <   C o n v e r s i o n _ T i m e o u t _ C P U _ c y c l e s _ m a x )  
                     {  
                         / *   U p d a t e   A D C   s t a t e   m a c h i n e   t o   t i m e o u t   * /  
                         S E T _ B I T ( h a d c - > S t a t e ,   H A L _ A D C _ S T A T E _ T I M E O U T ) ;  
  
                         / *   P r o c e s s   u n l o c k e d   * /  
                         _ _ H A L _ U N L O C K ( h a d c ) ;  
  
                         r e t u r n   H A L _ T I M E O U T ;  
                     }  
                 }  
             }  
             C o n v e r s i o n _ T i m e o u t _ C P U _ c y c l e s   + + ;  
         }  
     }  
      
     / *   C l e a r   r e g u l a r   g r o u p   c o n v e r s i o n   f l a g   * /  
     _ _ H A L _ A D C _ C L E A R _ F L A G ( h a d c ,   A D C _ F L A G _ S T R T   |   A D C _ F L A G _ E O C ) ;  
      
     / *   U p d a t e   A D C   s t a t e   m a c h i n e   * /  
     S E T _ B I T ( h a d c - > S t a t e ,   H A L _ A D C _ S T A T E _ R E G _ E O C ) ;  
      
     / *   D e t e r m i n e   w h e t h e r   a n y   f u r t h e r   c o n v e r s i o n   u p c o m i n g   o n   g r o u p   r e g u l a r               * /  
     / *   b y   e x t e r n a l   t r i g g e r ,   c o n t i n u o u s   m o d e   o r   s c a n   s e q u e n c e   o n   g o i n g .                     * /  
     / *   N o t e :   O n   S T M 3 2 F 1   d e v i c e s ,   i n   c a s e   o f   s e q u e n c e r   e n a b l e d                                       * /  
     / *               ( s e v e r a l   r a n k s   s e l e c t e d ) ,   e n d   o f   c o n v e r s i o n   f l a g   i s   r a i s e d                   * /  
     / *               a t   t h e   e n d   o f   t h e   s e q u e n c e .                                                                                 * /  
     i f ( A D C _ I S _ S O F T W A R E _ S T A R T _ R E G U L A R ( h a d c )                 & &    
           ( h a d c - > I n i t . C o n t i n u o u s C o n v M o d e   = =   D I S A B L E )       )  
     {        
         / *   S e t   A D C   s t a t e   * /  
         C L E A R _ B I T ( h a d c - > S t a t e ,   H A L _ A D C _ S T A T E _ R E G _ B U S Y ) ;        
  
         i f   ( H A L _ I S _ B I T _ C L R ( h a d c - > S t a t e ,   H A L _ A D C _ S T A T E _ I N J _ B U S Y ) )  
         {    
             S E T _ B I T ( h a d c - > S t a t e ,   H A L _ A D C _ S T A T E _ R E A D Y ) ;  
         }  
     }  
      
     / *   R e t u r n   A D C   s t a t e   * /  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     P o l l   f o r   c o n v e r s i o n   e v e n t .  
     *   @ p a r a m     h a d c :   A D C   h a n d l e  
     *   @ p a r a m     E v e n t T y p e :   t h e   A D C   e v e n t   t y p e .  
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   A D C _ A W D _ E V E N T :   A D C   A n a l o g   w a t c h d o g   e v e n t .  
     *   @ p a r a m     T i m e o u t :   T i m e o u t   v a l u e   i n   m i l l i s e c o n d .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ A D C _ P o l l F o r E v e n t ( A D C _ H a n d l e T y p e D e f *   h a d c ,   u i n t 3 2 _ t   E v e n t T y p e ,   u i n t 3 2 _ t   T i m e o u t )  
 {  
     u i n t 3 2 _ t   t i c k s t a r t   =   0 U ;    
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ A D C _ A L L _ I N S T A N C E ( h a d c - > I n s t a n c e ) ) ;  
     a s s e r t _ p a r a m ( I S _ A D C _ E V E N T _ T Y P E ( E v e n t T y p e ) ) ;  
      
     / *   G e t   t i c k   c o u n t   * /  
     t i c k s t a r t   =   H A L _ G e t T i c k ( ) ;  
      
     / *   C h e c k   s e l e c t e d   e v e n t   f l a g   * /  
     w h i l e ( _ _ H A L _ A D C _ G E T _ F L A G ( h a d c ,   E v e n t T y p e )   = =   R E S E T )  
     {  
         / *   C h e c k   i f   t i m e o u t   i s   d i s a b l e d   ( s e t   t o   i n f i n i t e   w a i t )   * /  
         i f ( T i m e o u t   ! =   H A L _ M A X _ D E L A Y )  
         {  
             i f ( ( T i m e o u t   = =   0 U )   | |   ( ( H A L _ G e t T i c k ( )   -   t i c k s t a r t   )   >   T i m e o u t ) )  
             {  
                 / *   N e w   c h e c k   t o   a v o i d   f a l s e   t i m e o u t   d e t e c t i o n   i n   c a s e   o f   p r e e m p t i o n   * /  
                 i f ( _ _ H A L _ A D C _ G E T _ F L A G ( h a d c ,   E v e n t T y p e )   = =   R E S E T )  
                 {  
                     / *   U p d a t e   A D C   s t a t e   m a c h i n e   t o   t i m e o u t   * /  
                     S E T _ B I T ( h a d c - > S t a t e ,   H A L _ A D C _ S T A T E _ T I M E O U T ) ;  
  
                     / *   P r o c e s s   u n l o c k e d   * /  
                     _ _ H A L _ U N L O C K ( h a d c ) ;  
  
                     r e t u r n   H A L _ T I M E O U T ;  
                 }  
             }  
         }  
     }  
      
     / *   A n a l o g   w a t c h d o g   ( l e v e l   o u t   o f   w i n d o w )   e v e n t   * /  
     / *   S e t   A D C   s t a t e   * /  
     S E T _ B I T ( h a d c - > S t a t e ,   H A L _ A D C _ S T A T E _ A W D 1 ) ;  
          
     / *   C l e a r   A D C   a n a l o g   w a t c h d o g   f l a g   * /  
     _ _ H A L _ A D C _ C L E A R _ F L A G ( h a d c ,   A D C _ F L A G _ A W D ) ;  
      
     / *   R e t u r n   A D C   s t a t e   * /  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     E n a b l e s   A D C ,   s t a r t s   c o n v e r s i o n   o f   r e g u l a r   g r o u p   w i t h   i n t e r r u p t i o n .  
     *                   I n t e r r u p t i o n s   e n a b l e d   i n   t h i s   f u n c t i o n :  
     *                     -   E O C   ( e n d   o f   c o n v e r s i o n   o f   r e g u l a r   g r o u p )  
     *                   E a c h   o f   t h e s e   i n t e r r u p t i o n s   h a s   i t s   d e d i c a t e d   c a l l b a c k   f u n c t i o n .  
     *   @ p a r a m     h a d c :   A D C   h a n d l e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ A D C _ S t a r t _ I T ( A D C _ H a n d l e T y p e D e f *   h a d c )  
 {  
     H A L _ S t a t u s T y p e D e f   t m p _ h a l _ s t a t u s   =   H A L _ O K ;  
      
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ A D C _ A L L _ I N S T A N C E ( h a d c - > I n s t a n c e ) ) ;  
      
     / *   P r o c e s s   l o c k e d   * /  
     _ _ H A L _ L O C K ( h a d c ) ;  
          
     / *   E n a b l e   t h e   A D C   p e r i p h e r a l   * /  
     t m p _ h a l _ s t a t u s   =   A D C _ E n a b l e ( h a d c ) ;  
      
     / *   S t a r t   c o n v e r s i o n   i f   A D C   i s   e f f e c t i v e l y   e n a b l e d   * /  
     i f   ( t m p _ h a l _ s t a t u s   = =   H A L _ O K )  
     {  
         / *   S e t   A D C   s t a t e                                                                                                                     * /  
         / *   -   C l e a r   s t a t e   b i t f i e l d   r e l a t e d   t o   r e g u l a r   g r o u p   c o n v e r s i o n   r e s u l t s           * /  
         / *   -   S e t   s t a t e   b i t f i e l d   r e l a t e d   t o   r e g u l a r   o p e r a t i o n                                             * /  
         A D C _ S T A T E _ C L R _ S E T ( h a d c - > S t a t e ,  
                                             H A L _ A D C _ S T A T E _ R E A D Y   |   H A L _ A D C _ S T A T E _ R E G _ E O C   |   H A L _ A D C _ S T A T E _ R E G _ O V R   |   H A L _ A D C _ S T A T E _ R E G _ E O S M P ,  
                                             H A L _ A D C _ S T A T E _ R E G _ B U S Y ) ;  
          
         / *   S e t   g r o u p   i n j e c t e d   s t a t e   ( f r o m   a u t o - i n j e c t i o n )   a n d   m u l t i m o d e   s t a t e           * /  
         / *   f o r   a l l   c a s e s   o f   m u l t i m o d e :   i n d e p e n d e n t   m o d e ,   m u l t i m o d e   A D C   m a s t e r           * /  
         / *   o r   m u l t i m o d e   A D C   s l a v e   ( f o r   d e v i c e s   w i t h   s e v e r a l   A D C s ) :                                 * /  
         i f   ( A D C _ N O N M U L T I M O D E _ O R _ M U L T I M O D E M A S T E R ( h a d c ) )  
         {  
             / *   S e t   A D C   s t a t e   ( A D C   i n d e p e n d e n t   o r   m a s t e r )   * /  
             C L E A R _ B I T ( h a d c - > S t a t e ,   H A L _ A D C _ S T A T E _ M U L T I M O D E _ S L A V E ) ;  
              
             / *   I f   c o n v e r s i o n s   o n   g r o u p   r e g u l a r   a r e   a l s o   t r i g g e r i n g   g r o u p   i n j e c t e d ,     * /  
             / *   u p d a t e   A D C   s t a t e .                                                                                                         * /  
             i f   ( R E A D _ B I T ( h a d c - > I n s t a n c e - > C R 1 ,   A D C _ C R 1 _ J A U T O )   ! =   R E S E T )  
             {  
                 A D C _ S T A T E _ C L R _ S E T ( h a d c - > S t a t e ,   H A L _ A D C _ S T A T E _ I N J _ E O C ,   H A L _ A D C _ S T A T E _ I N J _ B U S Y ) ;      
             }  
         }  
         e l s e  
         {  
             / *   S e t   A D C   s t a t e   ( A D C   s l a v e )   * /  
             S E T _ B I T ( h a d c - > S t a t e ,   H A L _ A D C _ S T A T E _ M U L T I M O D E _ S L A V E ) ;  
              
             / *   I f   c o n v e r s i o n s   o n   g r o u p   r e g u l a r   a r e   a l s o   t r i g g e r i n g   g r o u p   i n j e c t e d ,     * /  
             / *   u p d a t e   A D C   s t a t e .                                                                                                         * /  
             i f   ( A D C _ M U L T I M O D E _ A U T O _ I N J E C T E D ( h a d c ) )  
             {  
                 A D C _ S T A T E _ C L R _ S E T ( h a d c - > S t a t e ,   H A L _ A D C _ S T A T E _ I N J _ E O C ,   H A L _ A D C _ S T A T E _ I N J _ B U S Y ) ;  
             }  
         }  
          
         / *   S t a t e   m a c h i n e   u p d a t e :   C h e c k   i f   a n   i n j e c t e d   c o n v e r s i o n   i s   o n g o i n g   * /  
         i f   ( H A L _ I S _ B I T _ S E T ( h a d c - > S t a t e ,   H A L _ A D C _ S T A T E _ I N J _ B U S Y ) )  
         {  
             / *   R e s e t   A D C   e r r o r   c o d e   f i e l d s   r e l a t e d   t o   c o n v e r s i o n s   o n   g r o u p   r e g u l a r   * /  
             C L E A R _ B I T ( h a d c - > E r r o r C o d e ,   ( H A L _ A D C _ E R R O R _ O V R   |   H A L _ A D C _ E R R O R _ D M A ) ) ;                    
         }  
         e l s e  
         {  
             / *   R e s e t   A D C   a l l   e r r o r   c o d e   f i e l d s   * /  
             A D C _ C L E A R _ E R R O R C O D E ( h a d c ) ;  
         }  
          
         / *   P r o c e s s   u n l o c k e d   * /  
         / *   U n l o c k   b e f o r e   s t a r t i n g   A D C   c o n v e r s i o n s :   i n   c a s e   o f   p o t e n t i a l                       * /  
         / *   i n t e r r u p t i o n ,   t o   l e t   t h e   p r o c e s s   t o   A D C   I R Q   H a n d l e r .                                       * /  
         _ _ H A L _ U N L O C K ( h a d c ) ;  
          
         / *   C l e a r   r e g u l a r   g r o u p   c o n v e r s i o n   f l a g   a n d   o v e r r u n   f l a g   * /  
         / *   ( T o   e n s u r e   o f   n o   u n k n o w n   s t a t e   f r o m   p o t e n t i a l   p r e v i o u s   A D C   o p e r a t i o n s )   * /  
         _ _ H A L _ A D C _ C L E A R _ F L A G ( h a d c ,   A D C _ F L A G _ E O C ) ;  
          
         / *   E n a b l e   e n d   o f   c o n v e r s i o n   i n t e r r u p t   f o r   r e g u l a r   g r o u p   * /  
         _ _ H A L _ A D C _ E N A B L E _ I T ( h a d c ,   A D C _ I T _ E O C ) ;  
          
         / *   E n a b l e   c o n v e r s i o n   o f   r e g u l a r   g r o u p .                                                                         * /  
         / *   I f   s o f t w a r e   s t a r t   h a s   b e e n   s e l e c t e d ,   c o n v e r s i o n   s t a r t s   i m m e d i a t e l y .         * /  
         / *   I f   e x t e r n a l   t r i g g e r   h a s   b e e n   s e l e c t e d ,   c o n v e r s i o n   w i l l   s t a r t   a t   n e x t       * /  
         / *   t r i g g e r   e v e n t .                                                                                                                   * /  
         / *   C a s e   o f   m u l t i m o d e   e n a b l e d :                                                                                           * /    
         / *     -   i f   A D C   i s   s l a v e ,   A D C   i s   e n a b l e d   o n l y   ( c o n v e r s i o n   i s   n o t   s t a r t e d ) .       * /  
         / *     -   i f   A D C   i s   m a s t e r ,   A D C   i s   e n a b l e d   a n d   c o n v e r s i o n   i s   s t a r t e d .                   * /  
         i f   ( A D C _ I S _ S O F T W A R E _ S T A R T _ R E G U L A R ( h a d c )             & &  
                 A D C _ N O N M U L T I M O D E _ O R _ M U L T I M O D E M A S T E R ( h a d c )     )  
         {  
             / *   S t a r t   A D C   c o n v e r s i o n   o n   r e g u l a r   g r o u p   w i t h   S W   s t a r t   * /  
             S E T _ B I T ( h a d c - > I n s t a n c e - > C R 2 ,   ( A D C _ C R 2 _ S W S T A R T   |   A D C _ C R 2 _ E X T T R I G ) ) ;  
         }  
         e l s e  
         {  
             / *   S t a r t   A D C   c o n v e r s i o n   o n   r e g u l a r   g r o u p   w i t h   e x t e r n a l   t r i g g e r   * /  
             S E T _ B I T ( h a d c - > I n s t a n c e - > C R 2 ,   A D C _ C R 2 _ E X T T R I G ) ;  
         }  
     }  
     e l s e  
     {  
         / *   P r o c e s s   u n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h a d c ) ;  
     }  
      
     / *   R e t u r n   f u n c t i o n   s t a t u s   * /  
     r e t u r n   t m p _ h a l _ s t a t u s ;  
 }  
  
 / * *  
     *   @ b r i e f     S t o p   A D C   c o n v e r s i o n   o f   r e g u l a r   g r o u p   ( a n d   i n j e c t e d   g r o u p   i n    
     *                   c a s e   o f   a u t o _ i n j e c t i o n   m o d e ) ,   d i s a b l e   i n t e r r u t i o n   o f    
     *                   e n d - o f - c o n v e r s i o n ,   d i s a b l e   A D C   p e r i p h e r a l .  
     *   @ p a r a m     h a d c :   A D C   h a n d l e  
     *   @ r e t v a l   N o n e  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ A D C _ S t o p _ I T ( A D C _ H a n d l e T y p e D e f *   h a d c )  
 {  
     H A L _ S t a t u s T y p e D e f   t m p _ h a l _ s t a t u s   =   H A L _ O K ;  
      
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ A D C _ A L L _ I N S T A N C E ( h a d c - > I n s t a n c e ) ) ;  
            
     / *   P r o c e s s   l o c k e d   * /  
     _ _ H A L _ L O C K ( h a d c ) ;  
      
     / *   S t o p   p o t e n t i a l   c o n v e r s i o n   o n   g o i n g ,   o n   r e g u l a r   a n d   i n j e c t e d   g r o u p s   * /  
     / *   D i s a b l e   A D C   p e r i p h e r a l   * /  
     t m p _ h a l _ s t a t u s   =   A D C _ C o n v e r s i o n S t o p _ D i s a b l e ( h a d c ) ;  
      
     / *   C h e c k   i f   A D C   i s   e f f e c t i v e l y   d i s a b l e d   * /  
     i f   ( t m p _ h a l _ s t a t u s   = =   H A L _ O K )  
     {  
         / *   D i s a b l e   A D C   e n d   o f   c o n v e r s i o n   i n t e r r u p t   f o r   r e g u l a r   g r o u p   * /  
         _ _ H A L _ A D C _ D I S A B L E _ I T ( h a d c ,   A D C _ I T _ E O C ) ;  
          
         / *   S e t   A D C   s t a t e   * /  
         A D C _ S T A T E _ C L R _ S E T ( h a d c - > S t a t e ,  
                                             H A L _ A D C _ S T A T E _ R E G _ B U S Y   |   H A L _ A D C _ S T A T E _ I N J _ B U S Y ,  
                                             H A L _ A D C _ S T A T E _ R E A D Y ) ;  
     }  
      
     / *   P r o c e s s   u n l o c k e d   * /  
     _ _ H A L _ U N L O C K ( h a d c ) ;  
      
     / *   R e t u r n   f u n c t i o n   s t a t u s   * /  
     r e t u r n   t m p _ h a l _ s t a t u s ;  
 }  
  
 / * *  
     *   @ b r i e f     E n a b l e s   A D C ,   s t a r t s   c o n v e r s i o n   o f   r e g u l a r   g r o u p   a n d   t r a n s f e r s   r e s u l t  
     *                   t h r o u g h   D M A .  
     *                   I n t e r r u p t i o n s   e n a b l e d   i n   t h i s   f u n c t i o n :  
     *                     -   D M A   t r a n s f e r   c o m p l e t e  
     *                     -   D M A   h a l f   t r a n s f e r  
     *                   E a c h   o f   t h e s e   i n t e r r u p t i o n s   h a s   i t s   d e d i c a t e d   c a l l b a c k   f u n c t i o n .  
     *   @ n o t e       F o r   d e v i c e s   w i t h   s e v e r a l   A D C s :   T h i s   f u n c t i o n   i s   f o r   s i n g l e - A D C   m o d e    
     *                   o n l y .   F o r   m u l t i m o d e ,   u s e   t h e   d e d i c a t e d   M u l t i m o d e S t a r t   f u n c t i o n .  
     *   @ n o t e       O n   S T M 3 2 F 1   d e v i c e s ,   o n l y   A D C 1   a n d   A D C 3   ( A D C   a v a i l a b i l i t y   d e p e n d i n g  
     *                   o n   d e v i c e s )   h a v e   D M A   c a p a b i l i t y .  
     *                   A D C 2   c o n v e r t e d   d a t a   c a n   b e   t r a n s f e r r e d   i n   d u a l   A D C   m o d e   u s i n g   D M A  
     *                   o f   A D C 1   ( A D C   m a s t e r   i n   m u l t i m o d e ) .  
     *                   I n   c a s e   o f   u s i n g   A D C 1   w i t h   D M A   o n   a   d e v i c e   f e a t u r i n g   2   A D C  
     *                   i n s t a n c e s :   A D C 1   c o n v e r s i o n   r e g i s t e r   D R   c o n t a i n s   A D C 1   c o n v e r s i o n    
     *                   r e s u l t   ( A D C 1   r e g i s t e r   D R   b i t s   0   t o   1 1 )   a n d ,   a d d i t i o n a l l y ,   A D C 2   l a s t  
     *                   c o n v e r s i o n   r e s u l t   ( A D C 1   r e g i s t e r   D R   b i t s   1 6   t o   2 7 ) .   T h e r e f o r e ,   t o  
     *                   h a v e   D M A   t r a n s f e r r i n g   t h e   c o n v e r s i o n   r e s u l t s   o f   A D C 1   o n l y ,   D M A   m u s t  
     *                   b e   c o n f i g u r e d   t o   t r a n s f e r   s i z e :   h a l f   w o r d .  
     *   @ p a r a m     h a d c :   A D C   h a n d l e  
     *   @ p a r a m     p D a t a :   T h e   d e s t i n a t i o n   B u f f e r   a d d r e s s .  
     *   @ p a r a m     L e n g t h :   T h e   l e n g t h   o f   d a t a   t o   b e   t r a n s f e r r e d   f r o m   A D C   p e r i p h e r a l   t o   m e m o r y .  
     *   @ r e t v a l   N o n e  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ A D C _ S t a r t _ D M A ( A D C _ H a n d l e T y p e D e f *   h a d c ,   u i n t 3 2 _ t *   p D a t a ,   u i n t 3 2 _ t   L e n g t h )  
 {  
     H A L _ S t a t u s T y p e D e f   t m p _ h a l _ s t a t u s   =   H A L _ O K ;  
      
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ A D C _ D M A _ C A P A B I L I T Y _ I N S T A N C E ( h a d c - > I n s t a n c e ) ) ;  
          
     / *   V e r i f i c a t i o n   i f   m u l t i m o d e   i s   d i s a b l e d   ( f o r   d e v i c e s   w i t h   s e v e r a l   A D C )           * /  
     / *   I f   m u l t i m o d e   i s   e n a b l e d ,   d e d i c a t e d   f u n c t i o n   m u l t i m o d e   c o n v e r s i o n                   * /  
     / *   s t a r t   D M A   m u s t   b e   u s e d .                                                                                                     * /  
     i f ( A D C _ M U L T I M O D E _ I S _ E N A B L E ( h a d c )   = =   R E S E T )  
     {  
         / *   P r o c e s s   l o c k e d   * /  
         _ _ H A L _ L O C K ( h a d c ) ;  
          
         / *   E n a b l e   t h e   A D C   p e r i p h e r a l   * /  
         t m p _ h a l _ s t a t u s   =   A D C _ E n a b l e ( h a d c ) ;  
          
         / *   S t a r t   c o n v e r s i o n   i f   A D C   i s   e f f e c t i v e l y   e n a b l e d   * /  
         i f   ( t m p _ h a l _ s t a t u s   = =   H A L _ O K )  
         {  
             / *   S e t   A D C   s t a t e                                                                                                                 * /  
             / *   -   C l e a r   s t a t e   b i t f i e l d   r e l a t e d   t o   r e g u l a r   g r o u p   c o n v e r s i o n   r e s u l t s       * /  
             / *   -   S e t   s t a t e   b i t f i e l d   r e l a t e d   t o   r e g u l a r   o p e r a t i o n                                         * /  
             A D C _ S T A T E _ C L R _ S E T ( h a d c - > S t a t e ,  
                                                 H A L _ A D C _ S T A T E _ R E A D Y   |   H A L _ A D C _ S T A T E _ R E G _ E O C   |   H A L _ A D C _ S T A T E _ R E G _ O V R   |   H A L _ A D C _ S T A T E _ R E G _ E O S M P ,  
                                                 H A L _ A D C _ S T A T E _ R E G _ B U S Y ) ;  
          
         / *   S e t   g r o u p   i n j e c t e d   s t a t e   ( f r o m   a u t o - i n j e c t i o n )   a n d   m u l t i m o d e   s t a t e           * /  
         / *   f o r   a l l   c a s e s   o f   m u l t i m o d e :   i n d e p e n d e n t   m o d e ,   m u l t i m o d e   A D C   m a s t e r           * /  
         / *   o r   m u l t i m o d e   A D C   s l a v e   ( f o r   d e v i c e s   w i t h   s e v e r a l   A D C s ) :                                 * /  
         i f   ( A D C _ N O N M U L T I M O D E _ O R _ M U L T I M O D E M A S T E R ( h a d c ) )  
         {  
             / *   S e t   A D C   s t a t e   ( A D C   i n d e p e n d e n t   o r   m a s t e r )   * /  
             C L E A R _ B I T ( h a d c - > S t a t e ,   H A L _ A D C _ S T A T E _ M U L T I M O D E _ S L A V E ) ;  
              
             / *   I f   c o n v e r s i o n s   o n   g r o u p   r e g u l a r   a r e   a l s o   t r i g g e r i n g   g r o u p   i n j e c t e d ,     * /  
             / *   u p d a t e   A D C   s t a t e .                                                                                                         * /  
             i f   ( R E A D _ B I T ( h a d c - > I n s t a n c e - > C R 1 ,   A D C _ C R 1 _ J A U T O )   ! =   R E S E T )  
             {  
                 A D C _ S T A T E _ C L R _ S E T ( h a d c - > S t a t e ,   H A L _ A D C _ S T A T E _ I N J _ E O C ,   H A L _ A D C _ S T A T E _ I N J _ B U S Y ) ;      
             }  
         }  
         e l s e  
         {  
             / *   S e t   A D C   s t a t e   ( A D C   s l a v e )   * /  
             S E T _ B I T ( h a d c - > S t a t e ,   H A L _ A D C _ S T A T E _ M U L T I M O D E _ S L A V E ) ;  
              
             / *   I f   c o n v e r s i o n s   o n   g r o u p   r e g u l a r   a r e   a l s o   t r i g g e r i n g   g r o u p   i n j e c t e d ,     * /  
             / *   u p d a t e   A D C   s t a t e .                                                                                                         * /  
             i f   ( A D C _ M U L T I M O D E _ A U T O _ I N J E C T E D ( h a d c ) )  
             {  
                 A D C _ S T A T E _ C L R _ S E T ( h a d c - > S t a t e ,   H A L _ A D C _ S T A T E _ I N J _ E O C ,   H A L _ A D C _ S T A T E _ I N J _ B U S Y ) ;  
             }  
         }  
              
             / *   S t a t e   m a c h i n e   u p d a t e :   C h e c k   i f   a n   i n j e c t e d   c o n v e r s i o n   i s   o n g o i n g   * /  
             i f   ( H A L _ I S _ B I T _ S E T ( h a d c - > S t a t e ,   H A L _ A D C _ S T A T E _ I N J _ B U S Y ) )  
             {  
                 / *   R e s e t   A D C   e r r o r   c o d e   f i e l d s   r e l a t e d   t o   c o n v e r s i o n s   o n   g r o u p   r e g u l a r   * /  
                 C L E A R _ B I T ( h a d c - > E r r o r C o d e ,   ( H A L _ A D C _ E R R O R _ O V R   |   H A L _ A D C _ E R R O R _ D M A ) ) ;                    
             }  
             e l s e  
             {  
                 / *   R e s e t   A D C   a l l   e r r o r   c o d e   f i e l d s   * /  
                 A D C _ C L E A R _ E R R O R C O D E ( h a d c ) ;  
             }  
              
             / *   P r o c e s s   u n l o c k e d   * /  
             / *   U n l o c k   b e f o r e   s t a r t i n g   A D C   c o n v e r s i o n s :   i n   c a s e   o f   p o t e n t i a l                   * /  
             / *   i n t e r r u p t i o n ,   t o   l e t   t h e   p r o c e s s   t o   A D C   I R Q   H a n d l e r .                                   * /  
             _ _ H A L _ U N L O C K ( h a d c ) ;  
              
             / *   S e t   t h e   D M A   t r a n s f e r   c o m p l e t e   c a l l b a c k   * /  
             h a d c - > D M A _ H a n d l e - > X f e r C p l t C a l l b a c k   =   A D C _ D M A C o n v C p l t ;  
  
             / *   S e t   t h e   D M A   h a l f   t r a n s f e r   c o m p l e t e   c a l l b a c k   * /  
             h a d c - > D M A _ H a n d l e - > X f e r H a l f C p l t C a l l b a c k   =   A D C _ D M A H a l f C o n v C p l t ;  
              
             / *   S e t   t h e   D M A   e r r o r   c a l l b a c k   * /  
             h a d c - > D M A _ H a n d l e - > X f e r E r r o r C a l l b a c k   =   A D C _ D M A E r r o r ;  
  
              
             / *   M a n a g e   A D C   a n d   D M A   s t a r t :   A D C   o v e r r u n   i n t e r r u p t i o n ,   D M A   s t a r t ,   A D C       * /  
             / *   s t a r t   ( i n   c a s e   o f   S W   s t a r t ) :                                                                                   * /  
              
             / *   C l e a r   r e g u l a r   g r o u p   c o n v e r s i o n   f l a g   a n d   o v e r r u n   f l a g   * /  
             / *   ( T o   e n s u r e   o f   n o   u n k n o w n   s t a t e   f r o m   p o t e n t i a l   p r e v i o u s   A D C                       * /  
             / *   o p e r a t i o n s )                                                                                                                     * /  
             _ _ H A L _ A D C _ C L E A R _ F L A G ( h a d c ,   A D C _ F L A G _ E O C ) ;  
              
             / *   E n a b l e   A D C   D M A   m o d e   * /  
             S E T _ B I T ( h a d c - > I n s t a n c e - > C R 2 ,   A D C _ C R 2 _ D M A ) ;  
              
             / *   S t a r t   t h e   D M A   c h a n n e l   * /  
             H A L _ D M A _ S t a r t _ I T ( h a d c - > D M A _ H a n d l e ,   ( u i n t 3 2 _ t ) & h a d c - > I n s t a n c e - > D R ,   ( u i n t 3 2 _ t ) p D a t a ,   L e n g t h ) ;  
              
             / *   E n a b l e   c o n v e r s i o n   o f   r e g u l a r   g r o u p .                                                                     * /  
             / *   I f   s o f t w a r e   s t a r t   h a s   b e e n   s e l e c t e d ,   c o n v e r s i o n   s t a r t s   i m m e d i a t e l y .     * /  
             / *   I f   e x t e r n a l   t r i g g e r   h a s   b e e n   s e l e c t e d ,   c o n v e r s i o n   w i l l   s t a r t   a t   n e x t   * /  
             / *   t r i g g e r   e v e n t .                                                                                                               * /  
             i f   ( A D C _ I S _ S O F T W A R E _ S T A R T _ R E G U L A R ( h a d c ) )  
             {  
                 / *   S t a r t   A D C   c o n v e r s i o n   o n   r e g u l a r   g r o u p   w i t h   S W   s t a r t   * /  
                 S E T _ B I T ( h a d c - > I n s t a n c e - > C R 2 ,   ( A D C _ C R 2 _ S W S T A R T   |   A D C _ C R 2 _ E X T T R I G ) ) ;  
             }  
             e l s e  
             {  
                 / *   S t a r t   A D C   c o n v e r s i o n   o n   r e g u l a r   g r o u p   w i t h   e x t e r n a l   t r i g g e r   * /  
                 S E T _ B I T ( h a d c - > I n s t a n c e - > C R 2 ,   A D C _ C R 2 _ E X T T R I G ) ;  
             }  
         }  
         e l s e  
         {  
             / *   P r o c e s s   u n l o c k e d   * /  
             _ _ H A L _ U N L O C K ( h a d c ) ;  
         }  
     }  
     e l s e  
     {  
         t m p _ h a l _ s t a t u s   =   H A L _ E R R O R ;  
     }  
      
     / *   R e t u r n   f u n c t i o n   s t a t u s   * /  
     r e t u r n   t m p _ h a l _ s t a t u s ;  
 }  
  
 / * *  
     *   @ b r i e f     S t o p   A D C   c o n v e r s i o n   o f   r e g u l a r   g r o u p   ( a n d   i n j e c t e d   g r o u p   i n    
     *                   c a s e   o f   a u t o _ i n j e c t i o n   m o d e ) ,   d i s a b l e   A D C   D M A   t r a n s f e r ,   d i s a b l e    
     *                   A D C   p e r i p h e r a l .  
     *   @ n o t e :     A D C   p e r i p h e r a l   d i s a b l e   i s   f o r c i n g   s t o p   o f   p o t e n t i a l    
     *                   c o n v e r s i o n   o n   i n j e c t e d   g r o u p .   I f   i n j e c t e d   g r o u p   i s   u n d e r   u s e ,   i t  
     *                   s h o u l d   b e   p r e l i m i n a r i l y   s t o p p e d   u s i n g   H A L _ A D C E x _ I n j e c t e d S t o p   f u n c t i o n .  
     *   @ n o t e       F o r   d e v i c e s   w i t h   s e v e r a l   A D C s :   T h i s   f u n c t i o n   i s   f o r   s i n g l e - A D C   m o d e    
     *                   o n l y .   F o r   m u l t i m o d e ,   u s e   t h e   d e d i c a t e d   M u l t i m o d e S t o p   f u n c t i o n .  
     *   @ n o t e       O n   S T M 3 2 F 1   d e v i c e s ,   o n l y   A D C 1   a n d   A D C 3   ( A D C   a v a i l a b i l i t y   d e p e n d i n g  
     *                   o n   d e v i c e s )   h a v e   D M A   c a p a b i l i t y .  
     *   @ p a r a m     h a d c :   A D C   h a n d l e  
     *   @ r e t v a l   H A L   s t a t u s .  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ A D C _ S t o p _ D M A ( A D C _ H a n d l e T y p e D e f *   h a d c )  
 {  
     H A L _ S t a t u s T y p e D e f   t m p _ h a l _ s t a t u s   =   H A L _ O K ;  
      
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ A D C _ D M A _ C A P A B I L I T Y _ I N S T A N C E ( h a d c - > I n s t a n c e ) ) ;  
            
     / *   P r o c e s s   l o c k e d   * /  
     _ _ H A L _ L O C K ( h a d c ) ;  
      
     / *   S t o p   p o t e n t i a l   c o n v e r s i o n   o n   g o i n g ,   o n   r e g u l a r   a n d   i n j e c t e d   g r o u p s   * /  
     / *   D i s a b l e   A D C   p e r i p h e r a l   * /  
     t m p _ h a l _ s t a t u s   =   A D C _ C o n v e r s i o n S t o p _ D i s a b l e ( h a d c ) ;  
      
     / *   C h e c k   i f   A D C   i s   e f f e c t i v e l y   d i s a b l e d   * /  
     i f   ( t m p _ h a l _ s t a t u s   = =   H A L _ O K )  
     {  
         / *   D i s a b l e   A D C   D M A   m o d e   * /  
         C L E A R _ B I T ( h a d c - > I n s t a n c e - > C R 2 ,   A D C _ C R 2 _ D M A ) ;  
          
         / *   D i s a b l e   t h e   D M A   c h a n n e l   ( i n   c a s e   o f   D M A   i n   c i r c u l a r   m o d e   o r   s t o p   w h i l e   * /  
         / *   D M A   t r a n s f e r   i s   o n   g o i n g )                                                                                             * /  
         i f   ( h a d c - > D M A _ H a n d l e - > S t a t e   = =   H A L _ D M A _ S T A T E _ B U S Y )  
         {  
             t m p _ h a l _ s t a t u s   =   H A L _ D M A _ A b o r t ( h a d c - > D M A _ H a n d l e ) ;  
              
             / *   C h e c k   i f   D M A   c h a n n e l   e f f e c t i v e l y   d i s a b l e d   * /  
             i f   ( t m p _ h a l _ s t a t u s   = =   H A L _ O K )  
             {  
                 / *   S e t   A D C   s t a t e   * /  
                 A D C _ S T A T E _ C L R _ S E T ( h a d c - > S t a t e ,  
                                                     H A L _ A D C _ S T A T E _ R E G _ B U S Y   |   H A L _ A D C _ S T A T E _ I N J _ B U S Y ,  
                                                     H A L _ A D C _ S T A T E _ R E A D Y ) ;  
             }  
             e l s e  
             {  
                 / *   U p d a t e   A D C   s t a t e   m a c h i n e   t o   e r r o r   * /  
                 S E T _ B I T ( h a d c - > S t a t e ,   H A L _ A D C _ S T A T E _ E R R O R _ D M A ) ;  
             }  
         }  
     }  
      
     / *   P r o c e s s   u n l o c k e d   * /  
     _ _ H A L _ U N L O C K ( h a d c ) ;  
          
     / *   R e t u r n   f u n c t i o n   s t a t u s   * /  
     r e t u r n   t m p _ h a l _ s t a t u s ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   A D C   r e g u l a r   g r o u p   c o n v e r s i o n   r e s u l t .  
     *   @ n o t e       R e a d i n g   r e g i s t e r   D R   a u t o m a t i c a l l y   c l e a r s   A D C   f l a g   E O C  
     *                   ( A D C   g r o u p   r e g u l a r   e n d   o f   u n i t a r y   c o n v e r s i o n ) .  
     *   @ n o t e       T h i s   f u n c t i o n   d o e s   n o t   c l e a r   A D C   f l a g   E O S    
     *                   ( A D C   g r o u p   r e g u l a r   e n d   o f   s e q u e n c e   c o n v e r s i o n ) .  
     *                   O c c u r r e n c e   o f   f l a g   E O S   r i s i n g :  
     *                     -   I f   s e q u e n c e r   i s   c o m p o s e d   o f   1   r a n k ,   f l a g   E O S   i s   e q u i v a l e n t  
     *                         t o   f l a g   E O C .  
     *                     -   I f   s e q u e n c e r   i s   c o m p o s e d   o f   s e v e r a l   r a n k s ,   d u r i n g   t h e   s c a n  
     *                         s e q u e n c e   f l a g   E O C   o n l y   i s   r a i s e d ,   a t   t h e   e n d   o f   t h e   s c a n   s e q u e n c e  
     *                         b o t h   f l a g s   E O C   a n d   E O S   a r e   r a i s e d .  
     *                   T o   c l e a r   t h i s   f l a g ,   e i t h e r   u s e   f u n c t i o n :    
     *                   i n   p r o g r a m m i n g   m o d e l   I T :   @ r e f   H A L _ A D C _ I R Q H a n d l e r ( ) ,   i n   p r o g r a m m i n g  
     *                   m o d e l   p o l l i n g :   @ r e f   H A L _ A D C _ P o l l F o r C o n v e r s i o n ( )    
     *                   o r   @ r e f   _ _ H A L _ A D C _ C L E A R _ F L A G ( & h a d c ,   A D C _ F L A G _ E O S ) .  
     *   @ p a r a m     h a d c :   A D C   h a n d l e  
     *   @ r e t v a l   A D C   g r o u p   r e g u l a r   c o n v e r s i o n   d a t a  
     * /  
 u i n t 3 2 _ t   H A L _ A D C _ G e t V a l u e ( A D C _ H a n d l e T y p e D e f *   h a d c )  
 {  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ A D C _ A L L _ I N S T A N C E ( h a d c - > I n s t a n c e ) ) ;  
  
     / *   N o t e :   E O C   f l a g   i s   n o t   c l e a r e d   h e r e   b y   s o f t w a r e   b e c a u s e   a u t o m a t i c a l l y           * /  
     / *               c l e a r e d   b y   h a r d w a r e   w h e n   r e a d i n g   r e g i s t e r   D R .                                             * /  
      
     / *   R e t u r n   A D C   c o n v e r t e d   v a l u e   * /    
     r e t u r n   h a d c - > I n s t a n c e - > D R ;  
 }  
  
 / * *  
     *   @ b r i e f     H a n d l e s   A D C   i n t e r r u p t   r e q u e s t      
     *   @ p a r a m     h a d c :   A D C   h a n d l e  
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   H A L _ A D C _ I R Q H a n d l e r ( A D C _ H a n d l e T y p e D e f *   h a d c )  
 {  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ A D C _ A L L _ I N S T A N C E ( h a d c - > I n s t a n c e ) ) ;  
     a s s e r t _ p a r a m ( I S _ F U N C T I O N A L _ S T A T E ( h a d c - > I n i t . C o n t i n u o u s C o n v M o d e ) ) ;  
     a s s e r t _ p a r a m ( I S _ A D C _ R E G U L A R _ N B _ C O N V ( h a d c - > I n i t . N b r O f C o n v e r s i o n ) ) ;  
      
      
     / *   = = = = = = = = = =   C h e c k   E n d   o f   C o n v e r s i o n   f l a g   f o r   r e g u l a r   g r o u p   = = = = = = = = = =   * /  
     i f ( _ _ H A L _ A D C _ G E T _ I T _ S O U R C E ( h a d c ,   A D C _ I T _ E O C ) )  
     {  
         i f ( _ _ H A L _ A D C _ G E T _ F L A G ( h a d c ,   A D C _ F L A G _ E O C )   )  
         {  
             / *   U p d a t e   s t a t e   m a c h i n e   o n   c o n v e r s i o n   s t a t u s   i f   n o t   i n   e r r o r   s t a t e   * /  
             i f   ( H A L _ I S _ B I T _ C L R ( h a d c - > S t a t e ,   H A L _ A D C _ S T A T E _ E R R O R _ I N T E R N A L ) )  
             {  
                 / *   S e t   A D C   s t a t e   * /  
                 S E T _ B I T ( h a d c - > S t a t e ,   H A L _ A D C _ S T A T E _ R E G _ E O C ) ;    
             }  
              
             / *   D e t e r m i n e   w h e t h e r   a n y   f u r t h e r   c o n v e r s i o n   u p c o m i n g   o n   g r o u p   r e g u l a r       * /  
             / *   b y   e x t e r n a l   t r i g g e r ,   c o n t i n u o u s   m o d e   o r   s c a n   s e q u e n c e   o n   g o i n g .             * /  
             / *   N o t e :   O n   S T M 3 2 F 1   d e v i c e s ,   i n   c a s e   o f   s e q u e n c e r   e n a b l e d                               * /  
             / *               ( s e v e r a l   r a n k s   s e l e c t e d ) ,   e n d   o f   c o n v e r s i o n   f l a g   i s   r a i s e d           * /  
             / *               a t   t h e   e n d   o f   t h e   s e q u e n c e .                                                                         * /  
             i f ( A D C _ I S _ S O F T W A R E _ S T A R T _ R E G U L A R ( h a d c )                 & &    
                   ( h a d c - > I n i t . C o n t i n u o u s C o n v M o d e   = =   D I S A B L E )       )  
             {  
                 / *   D i s a b l e   A D C   e n d   o f   c o n v e r s i o n   i n t e r r u p t   o n   g r o u p   r e g u l a r   * /  
                 _ _ H A L _ A D C _ D I S A B L E _ I T ( h a d c ,   A D C _ I T _ E O C ) ;  
                  
                 / *   S e t   A D C   s t a t e   * /  
                 C L E A R _ B I T ( h a d c - > S t a t e ,   H A L _ A D C _ S T A T E _ R E G _ B U S Y ) ;        
                  
                 i f   ( H A L _ I S _ B I T _ C L R ( h a d c - > S t a t e ,   H A L _ A D C _ S T A T E _ I N J _ B U S Y ) )  
                 {  
                     S E T _ B I T ( h a d c - > S t a t e ,   H A L _ A D C _ S T A T E _ R E A D Y ) ;  
                 }  
             }  
  
             / *   C o n v e r s i o n   c o m p l e t e   c a l l b a c k   * /  
 # i f   ( U S E _ H A L _ A D C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
             h a d c - > C o n v C p l t C a l l b a c k ( h a d c ) ;  
 # e l s e  
             H A L _ A D C _ C o n v C p l t C a l l b a c k ( h a d c ) ;  
 # e n d i f   / *   U S E _ H A L _ A D C _ R E G I S T E R _ C A L L B A C K S   * /  
              
             / *   C l e a r   r e g u l a r   g r o u p   c o n v e r s i o n   f l a g   * /  
             _ _ H A L _ A D C _ C L E A R _ F L A G ( h a d c ,   A D C _ F L A G _ S T R T   |   A D C _ F L A G _ E O C ) ;  
         }  
     }  
      
     / *   = = = = = = = = = =   C h e c k   E n d   o f   C o n v e r s i o n   f l a g   f o r   i n j e c t e d   g r o u p   = = = = = = = = = =   * /  
     i f ( _ _ H A L _ A D C _ G E T _ I T _ S O U R C E ( h a d c ,   A D C _ I T _ J E O C ) )  
     {  
         i f ( _ _ H A L _ A D C _ G E T _ F L A G ( h a d c ,   A D C _ F L A G _ J E O C ) )  
         {  
             / *   U p d a t e   s t a t e   m a c h i n e   o n   c o n v e r s i o n   s t a t u s   i f   n o t   i n   e r r o r   s t a t e   * /  
             i f   ( H A L _ I S _ B I T _ C L R ( h a d c - > S t a t e ,   H A L _ A D C _ S T A T E _ E R R O R _ I N T E R N A L ) )  
             {  
                 / *   S e t   A D C   s t a t e   * /  
                 S E T _ B I T ( h a d c - > S t a t e ,   H A L _ A D C _ S T A T E _ I N J _ E O C ) ;  
             }  
  
             / *   D e t e r m i n e   w h e t h e r   a n y   f u r t h e r   c o n v e r s i o n   u p c o m i n g   o n   g r o u p   i n j e c t e d     * /  
             / *   b y   e x t e r n a l   t r i g g e r ,   s c a n   s e q u e n c e   o n   g o i n g   o r   b y   a u t o m a t i c   i n j e c t e d   * /  
             / *   c o n v e r s i o n   f r o m   g r o u p   r e g u l a r   ( s a m e   c o n d i t i o n s   a s   g r o u p   r e g u l a r             * /  
             / *   i n t e r r u p t i o n   d i s a b l i n g   a b o v e ) .                                                                               * /  
             / *   N o t e :   O n   S T M 3 2 F 1   d e v i c e s ,   i n   c a s e   o f   s e q u e n c e r   e n a b l e d                               * /  
             / *               ( s e v e r a l   r a n k s   s e l e c t e d ) ,   e n d   o f   c o n v e r s i o n   f l a g   i s   r a i s e d           * /  
             / *               a t   t h e   e n d   o f   t h e   s e q u e n c e .                                                                         * /  
             i f ( A D C _ I S _ S O F T W A R E _ S T A R T _ I N J E C T E D ( h a d c )                                           | |    
                   ( H A L _ I S _ B I T _ C L R ( h a d c - > I n s t a n c e - > C R 1 ,   A D C _ C R 1 _ J A U T O )   & &            
                   ( A D C _ I S _ S O F T W A R E _ S T A R T _ R E G U L A R ( h a d c )                 & &  
                     ( h a d c - > I n i t . C o n t i n u o u s C o n v M o d e   = =   D I S A B L E )       )                 )       )  
             {  
                 / *   D i s a b l e   A D C   e n d   o f   c o n v e r s i o n   i n t e r r u p t   o n   g r o u p   i n j e c t e d   * /  
                 _ _ H A L _ A D C _ D I S A B L E _ I T ( h a d c ,   A D C _ I T _ J E O C ) ;  
                  
                 / *   S e t   A D C   s t a t e   * /  
                 C L E A R _ B I T ( h a d c - > S t a t e ,   H A L _ A D C _ S T A T E _ I N J _ B U S Y ) ;        
  
                 i f   ( H A L _ I S _ B I T _ C L R ( h a d c - > S t a t e ,   H A L _ A D C _ S T A T E _ R E G _ B U S Y ) )  
                 {    
                     S E T _ B I T ( h a d c - > S t a t e ,   H A L _ A D C _ S T A T E _ R E A D Y ) ;  
                 }  
             }  
  
             / *   C o n v e r s i o n   c o m p l e t e   c a l l b a c k   * /    
 # i f   ( U S E _ H A L _ A D C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
             h a d c - > I n j e c t e d C o n v C p l t C a l l b a c k ( h a d c ) ;  
 # e l s e  
             H A L _ A D C E x _ I n j e c t e d C o n v C p l t C a l l b a c k ( h a d c ) ;  
 # e n d i f   / *   U S E _ H A L _ A D C _ R E G I S T E R _ C A L L B A C K S   * /  
              
             / *   C l e a r   i n j e c t e d   g r o u p   c o n v e r s i o n   f l a g   * /  
             _ _ H A L _ A D C _ C L E A R _ F L A G ( h a d c ,   ( A D C _ F L A G _ J S T R T   |   A D C _ F L A G _ J E O C ) ) ;  
         }  
     }  
        
     / *   = = = = = = = = = =   C h e c k   A n a l o g   w a t c h d o g   f l a g s   = = = = = = = = = =   * /  
     i f ( _ _ H A L _ A D C _ G E T _ I T _ S O U R C E ( h a d c ,   A D C _ I T _ A W D ) )  
     {  
         i f ( _ _ H A L _ A D C _ G E T _ F L A G ( h a d c ,   A D C _ F L A G _ A W D ) )  
         {  
             / *   S e t   A D C   s t a t e   * /  
             S E T _ B I T ( h a d c - > S t a t e ,   H A L _ A D C _ S T A T E _ A W D 1 ) ;  
              
             / *   L e v e l   o u t   o f   w i n d o w   c a l l b a c k   * /    
 # i f   ( U S E _ H A L _ A D C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
             h a d c - > L e v e l O u t O f W i n d o w C a l l b a c k ( h a d c ) ;  
 # e l s e  
             H A L _ A D C _ L e v e l O u t O f W i n d o w C a l l b a c k ( h a d c ) ;  
 # e n d i f   / *   U S E _ H A L _ A D C _ R E G I S T E R _ C A L L B A C K S   * /  
              
             / *   C l e a r   t h e   A D C   a n a l o g   w a t c h d o g   f l a g   * /  
             _ _ H A L _ A D C _ C L E A R _ F L A G ( h a d c ,   A D C _ F L A G _ A W D ) ;  
         }  
     }  
      
 }  
  
 / * *  
     *   @ b r i e f     C o n v e r s i o n   c o m p l e t e   c a l l b a c k   i n   n o n   b l o c k i n g   m o d e    
     *   @ p a r a m     h a d c :   A D C   h a n d l e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ A D C _ C o n v C p l t C a l l b a c k ( A D C _ H a n d l e T y p e D e f *   h a d c )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h a d c ) ;  
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d .   W h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         f u n c t i o n   H A L _ A D C _ C o n v C p l t C a l l b a c k   m u s t   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e .  
       * /  
 }  
  
 / * *  
     *   @ b r i e f     C o n v e r s i o n   D M A   h a l f - t r a n s f e r   c a l l b a c k   i n   n o n   b l o c k i n g   m o d e    
     *   @ p a r a m     h a d c :   A D C   h a n d l e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ A D C _ C o n v H a l f C p l t C a l l b a c k ( A D C _ H a n d l e T y p e D e f *   h a d c )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h a d c ) ;  
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d .   W h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         f u n c t i o n   H A L _ A D C _ C o n v H a l f C p l t C a l l b a c k   m u s t   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e .  
     * /  
 }  
  
 / * *  
     *   @ b r i e f     A n a l o g   w a t c h d o g   c a l l b a c k   i n   n o n   b l o c k i n g   m o d e .    
     *   @ p a r a m     h a d c :   A D C   h a n d l e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ A D C _ L e v e l O u t O f W i n d o w C a l l b a c k ( A D C _ H a n d l e T y p e D e f *   h a d c )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h a d c ) ;  
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d .   W h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         f u n c t i o n   H A L _ A D C _ L e v e l O u t O f W i n d o w C a l l b a c k   m u s t   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e .  
     * /  
 }  
  
 / * *  
     *   @ b r i e f     A D C   e r r o r   c a l l b a c k   i n   n o n   b l o c k i n g   m o d e  
     *                 ( A D C   c o n v e r s i o n   w i t h   i n t e r r u p t i o n   o r   t r a n s f e r   b y   D M A )  
     *   @ p a r a m     h a d c :   A D C   h a n d l e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ A D C _ E r r o r C a l l b a c k ( A D C _ H a n d l e T y p e D e f   * h a d c )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h a d c ) ;  
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d .   W h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         f u n c t i o n   H A L _ A D C _ E r r o r C a l l b a c k   m u s t   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e .  
     * /  
 }  
  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   A D C _ E x p o r t e d _ F u n c t i o n s _ G r o u p 3   P e r i p h e r a l   C o n t r o l   f u n c t i o n s  
   *     @ b r i e f         P e r i p h e r a l   C o n t r o l   f u n c t i o n s  
   *  
 @ v e r b a t i m        
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                           # # # # #   P e r i p h e r a l   C o n t r o l   f u n c t i o n s   # # # # #  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =      
         [ . . ]     T h i s   s e c t i o n   p r o v i d e s   f u n c t i o n s   a l l o w i n g   t o :  
             ( + )   C o n f i g u r e   c h a n n e l s   o n   r e g u l a r   g r o u p  
             ( + )   C o n f i g u r e   t h e   a n a l o g   w a t c h d o g  
              
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     C o n f i g u r e s   t h e   t h e   s e l e c t e d   c h a n n e l   t o   b e   l i n k e d   t o   t h e   r e g u l a r  
     *                   g r o u p .  
     *   @ n o t e       I n   c a s e   o f   u s a g e   o f   i n t e r n a l   m e a s u r e m e n t   c h a n n e l s :  
     *                   V b a t / V r e f I n t / T e m p S e n s o r .  
     *                   T h e s e   i n t e r n a l   p a t h s   c a n   b e   b e   d i s a b l e d   u s i n g   f u n c t i o n    
     *                   H A L _ A D C _ D e I n i t ( ) .  
     *   @ n o t e       P o s s i b i l i t y   t o   u p d a t e   p a r a m e t e r s   o n   t h e   f l y :  
     *                   T h i s   f u n c t i o n   i n i t i a l i z e s   c h a n n e l   i n t o   r e g u l a r   g r o u p ,   f o l l o w i n g      
     *                   c a l l s   t o   t h i s   f u n c t i o n   c a n   b e   u s e d   t o   r e c o n f i g u r e   s o m e   p a r a m e t e r s    
     *                   o f   s t r u c t u r e   " A D C _ C h a n n e l C o n f T y p e D e f "   o n   t h e   f l y ,   w i t h o u t   r e s e t i n g    
     *                   t h e   A D C .  
     *                   T h e   s e t t i n g   o f   t h e s e   p a r a m e t e r s   i s   c o n d i t i o n e d   t o   A D C   s t a t e .  
     *                   F o r   p a r a m e t e r s   c o n s t r a i n t s ,   s e e   c o m m e n t s   o f   s t r u c t u r e    
     *                   " A D C _ C h a n n e l C o n f T y p e D e f " .  
     *   @ p a r a m     h a d c :   A D C   h a n d l e  
     *   @ p a r a m     s C o n f i g :   S t r u c t u r e   o f   A D C   c h a n n e l   f o r   r e g u l a r   g r o u p .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ A D C _ C o n f i g C h a n n e l ( A D C _ H a n d l e T y p e D e f *   h a d c ,   A D C _ C h a n n e l C o n f T y p e D e f *   s C o n f i g )  
 {    
     H A L _ S t a t u s T y p e D e f   t m p _ h a l _ s t a t u s   =   H A L _ O K ;  
     _ _ I O   u i n t 3 2 _ t   w a i t _ l o o p _ i n d e x   =   0 U ;  
      
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ A D C _ A L L _ I N S T A N C E ( h a d c - > I n s t a n c e ) ) ;  
     a s s e r t _ p a r a m ( I S _ A D C _ C H A N N E L ( s C o n f i g - > C h a n n e l ) ) ;  
     a s s e r t _ p a r a m ( I S _ A D C _ R E G U L A R _ R A N K ( s C o n f i g - > R a n k ) ) ;  
     a s s e r t _ p a r a m ( I S _ A D C _ S A M P L E _ T I M E ( s C o n f i g - > S a m p l i n g T i m e ) ) ;  
      
     / *   P r o c e s s   l o c k e d   * /  
     _ _ H A L _ L O C K ( h a d c ) ;  
      
      
     / *   R e g u l a r   s e q u e n c e   c o n f i g u r a t i o n   * /  
     / *   F o r   R a n k   1   t o   6   * /  
     i f   ( s C o n f i g - > R a n k   <   7 U )  
     {  
         M O D I F Y _ R E G ( h a d c - > I n s t a n c e - > S Q R 3                                                 ,  
                               A D C _ S Q R 3 _ R K ( A D C _ S Q R 3 _ S Q 1 ,   s C o n f i g - > R a n k )         ,  
                               A D C _ S Q R 3 _ R K ( s C o n f i g - > C h a n n e l ,   s C o n f i g - > R a n k )   ) ;  
     }  
     / *   F o r   R a n k   7   t o   1 2   * /  
     e l s e   i f   ( s C o n f i g - > R a n k   <   1 3 U )  
     {  
         M O D I F Y _ R E G ( h a d c - > I n s t a n c e - > S Q R 2                                                 ,  
                               A D C _ S Q R 2 _ R K ( A D C _ S Q R 2 _ S Q 7 ,   s C o n f i g - > R a n k )         ,  
                               A D C _ S Q R 2 _ R K ( s C o n f i g - > C h a n n e l ,   s C o n f i g - > R a n k )   ) ;  
     }  
     / *   F o r   R a n k   1 3   t o   1 6   * /  
     e l s e  
     {  
         M O D I F Y _ R E G ( h a d c - > I n s t a n c e - > S Q R 1                                                 ,  
                               A D C _ S Q R 1 _ R K ( A D C _ S Q R 1 _ S Q 1 3 ,   s C o n f i g - > R a n k )       ,  
                               A D C _ S Q R 1 _ R K ( s C o n f i g - > C h a n n e l ,   s C o n f i g - > R a n k )   ) ;  
     }  
      
      
     / *   C h a n n e l   s a m p l i n g   t i m e   c o n f i g u r a t i o n   * /  
     / *   F o r   c h a n n e l s   1 0   t o   1 7   * /  
     i f   ( s C o n f i g - > C h a n n e l   > =   A D C _ C H A N N E L _ 1 0 )  
     {  
         M O D I F Y _ R E G ( h a d c - > I n s t a n c e - > S M P R 1                                                           ,  
                               A D C _ S M P R 1 ( A D C _ S M P R 1 _ S M P 1 0 ,   s C o n f i g - > C h a n n e l )             ,  
                               A D C _ S M P R 1 ( s C o n f i g - > S a m p l i n g T i m e ,   s C o n f i g - > C h a n n e l )   ) ;  
     }  
     e l s e   / *   F o r   c h a n n e l s   0   t o   9   * /  
     {  
         M O D I F Y _ R E G ( h a d c - > I n s t a n c e - > S M P R 2                                                           ,  
                               A D C _ S M P R 2 ( A D C _ S M P R 2 _ S M P 0 ,   s C o n f i g - > C h a n n e l )               ,  
                               A D C _ S M P R 2 ( s C o n f i g - > S a m p l i n g T i m e ,   s C o n f i g - > C h a n n e l )   ) ;  
     }  
      
     / *   I f   A D C 1   C h a n n e l _ 1 6   o r   C h a n n e l _ 1 7   i s   s e l e c t e d ,   e n a b l e   T e m p e r a t u r e   s e n s o r     * /  
     / *   a n d   V R E F I N T   m e a s u r e m e n t   p a t h .                                                                                         * /  
     i f   ( ( s C o n f i g - > C h a n n e l   = =   A D C _ C H A N N E L _ T E M P S E N S O R )   | |  
             ( s C o n f i g - > C h a n n e l   = =   A D C _ C H A N N E L _ V R E F I N T )             )  
     {  
         / *   F o r   S T M 3 2 F 1   d e v i c e s   w i t h   s e v e r a l   A D C :   O n l y   A D C 1   c a n   a c c e s s   i n t e r n a l         * /  
         / *   m e a s u r e m e n t   c h a n n e l s   ( V r e f I n t / T e m p S e n s o r ) .   I f   t h e s e   c h a n n e l s   a r e               * /  
         / *   i n t e n d e d   t o   b e   s e t   o n   o t h e r   A D C   i n s t a n c e s ,   a n   e r r o r   i s   r e p o r t e d .               * /  
         i f   ( h a d c - > I n s t a n c e   = =   A D C 1 )  
         {  
             i f   ( R E A D _ B I T ( h a d c - > I n s t a n c e - > C R 2 ,   A D C _ C R 2 _ T S V R E F E )   = =   R E S E T )  
             {  
                 S E T _ B I T ( h a d c - > I n s t a n c e - > C R 2 ,   A D C _ C R 2 _ T S V R E F E ) ;  
                  
                 i f   ( s C o n f i g - > C h a n n e l   = =   A D C _ C H A N N E L _ T E M P S E N S O R )  
                 {  
                     / *   D e l a y   f o r   t e m p e r a t u r e   s e n s o r   s t a b i l i z a t i o n   t i m e   * /  
                     / *   C o m p u t e   n u m b e r   o f   C P U   c y c l e s   t o   w a i t   f o r   * /  
                     w a i t _ l o o p _ i n d e x   =   ( A D C _ T E M P S E N S O R _ D E L A Y _ U S   *   ( S y s t e m C o r e C l o c k   /   1 0 0 0 0 0 0 U ) ) ;  
                     w h i l e ( w a i t _ l o o p _ i n d e x   ! =   0 U )  
                     {  
                         w a i t _ l o o p _ i n d e x - - ;  
                     }  
                 }  
             }  
         }  
         e l s e  
         {  
             / *   U p d a t e   A D C   s t a t e   m a c h i n e   t o   e r r o r   * /  
             S E T _ B I T ( h a d c - > S t a t e ,   H A L _ A D C _ S T A T E _ E R R O R _ C O N F I G ) ;  
              
             t m p _ h a l _ s t a t u s   =   H A L _ E R R O R ;  
         }  
     }  
      
     / *   P r o c e s s   u n l o c k e d   * /  
     _ _ H A L _ U N L O C K ( h a d c ) ;  
      
     / *   R e t u r n   f u n c t i o n   s t a t u s   * /  
     r e t u r n   t m p _ h a l _ s t a t u s ;  
 }  
  
 / * *  
     *   @ b r i e f     C o n f i g u r e s   t h e   a n a l o g   w a t c h d o g .  
     *   @ n o t e       A n a l o g   w a t c h d o g   t h r e s h o l d s   c a n   b e   m o d i f i e d   w h i l e   A D C   c o n v e r s i o n  
     *                   i s   o n   g o i n g .  
     *                   I n   t h i s   c a s e ,   s o m e   c o n s t r a i n t s   m u s t   b e   t a k e n   i n t o   a c c o u n t :  
     *                   t h e   p r o g r a m m e d   t h r e s h o l d   v a l u e s   a r e   e f f e c t i v e   f r o m   t h e   n e x t  
     *                   A D C   E O C   ( e n d   o f   u n i t a r y   c o n v e r s i o n ) .  
     *                   C o n s i d e r i n g   t h a t   r e g i s t e r s   w r i t e   d e l a y   m a y   h a p p e n   d u e   t o  
     *                   b u s   a c t i v i t y ,   t h i s   m i g h t   c a u s e   a n   u n c e r t a i n t y   o n   t h e  
     *                   e f f e c t i v e   t i m i n g   o f   t h e   n e w   p r o g r a m m e d   t h r e s h o l d   v a l u e s .  
     *   @ p a r a m     h a d c :   A D C   h a n d l e  
     *   @ p a r a m     A n a l o g W D G C o n f i g :   S t r u c t u r e   o f   A D C   a n a l o g   w a t c h d o g   c o n f i g u r a t i o n  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ A D C _ A n a l o g W D G C o n f i g ( A D C _ H a n d l e T y p e D e f *   h a d c ,   A D C _ A n a l o g W D G C o n f T y p e D e f *   A n a l o g W D G C o n f i g )  
 {  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ A D C _ A L L _ I N S T A N C E ( h a d c - > I n s t a n c e ) ) ;  
     a s s e r t _ p a r a m ( I S _ A D C _ A N A L O G _ W A T C H D O G _ M O D E ( A n a l o g W D G C o n f i g - > W a t c h d o g M o d e ) ) ;  
     a s s e r t _ p a r a m ( I S _ F U N C T I O N A L _ S T A T E ( A n a l o g W D G C o n f i g - > I T M o d e ) ) ;  
     a s s e r t _ p a r a m ( I S _ A D C _ R A N G E ( A n a l o g W D G C o n f i g - > H i g h T h r e s h o l d ) ) ;  
     a s s e r t _ p a r a m ( I S _ A D C _ R A N G E ( A n a l o g W D G C o n f i g - > L o w T h r e s h o l d ) ) ;  
      
     i f ( ( A n a l o g W D G C o n f i g - > W a t c h d o g M o d e   = =   A D C _ A N A L O G W A T C H D O G _ S I N G L E _ R E G )           | |  
           ( A n a l o g W D G C o n f i g - > W a t c h d o g M o d e   = =   A D C _ A N A L O G W A T C H D O G _ S I N G L E _ I N J E C )       | |  
           ( A n a l o g W D G C o n f i g - > W a t c h d o g M o d e   = =   A D C _ A N A L O G W A T C H D O G _ S I N G L E _ R E G I N J E C )     )  
     {  
         a s s e r t _ p a r a m ( I S _ A D C _ C H A N N E L ( A n a l o g W D G C o n f i g - > C h a n n e l ) ) ;  
     }  
      
     / *   P r o c e s s   l o c k e d   * /  
     _ _ H A L _ L O C K ( h a d c ) ;  
      
     / *   A n a l o g   w a t c h d o g   c o n f i g u r a t i o n   * /  
  
     / *   C o n f i g u r e   A D C   A n a l o g   w a t c h d o g   i n t e r r u p t   * /  
     i f ( A n a l o g W D G C o n f i g - > I T M o d e   = =   E N A B L E )  
     {  
         / *   E n a b l e   t h e   A D C   A n a l o g   w a t c h d o g   i n t e r r u p t   * /  
         _ _ H A L _ A D C _ E N A B L E _ I T ( h a d c ,   A D C _ I T _ A W D ) ;  
     }  
     e l s e  
     {  
         / *   D i s a b l e   t h e   A D C   A n a l o g   w a t c h d o g   i n t e r r u p t   * /  
         _ _ H A L _ A D C _ D I S A B L E _ I T ( h a d c ,   A D C _ I T _ A W D ) ;  
     }  
      
     / *   C o n f i g u r a t i o n   o f   a n a l o g   w a t c h d o g :                                                                                 * /  
     / *     -   S e t   t h e   a n a l o g   w a t c h d o g   e n a b l e   m o d e :   r e g u l a r   a n d / o r   i n j e c t e d   g r o u p s ,     * /  
     / *         o n e   o r   a l l   c h a n n e l s .                                                                                                     * /  
     / *     -   S e t   t h e   A n a l o g   w a t c h d o g   c h a n n e l   ( i s   n o t   u s e d   i f   w a t c h d o g                             * /  
     / *         m o d e   " a l l   c h a n n e l s " :   A D C _ C F G R _ A W D 1 S G L = 0 ) .                                                           * /  
     M O D I F Y _ R E G ( h a d c - > I n s t a n c e - > C R 1                         ,  
                           A D C _ C R 1 _ A W D S G L   |  
                           A D C _ C R 1 _ J A W D E N   |  
                           A D C _ C R 1 _ A W D E N     |  
                           A D C _ C R 1 _ A W D C H                                     ,  
                           A n a l o g W D G C o n f i g - > W a t c h d o g M o d e   |  
                           A n a l o g W D G C o n f i g - > C h a n n e l                 ) ;  
      
     / *   S e t   t h e   h i g h   t h r e s h o l d   * /  
     W R I T E _ R E G ( h a d c - > I n s t a n c e - > H T R ,   A n a l o g W D G C o n f i g - > H i g h T h r e s h o l d ) ;  
      
     / *   S e t   t h e   l o w   t h r e s h o l d   * /  
     W R I T E _ R E G ( h a d c - > I n s t a n c e - > L T R ,   A n a l o g W D G C o n f i g - > L o w T h r e s h o l d ) ;  
  
     / *   P r o c e s s   u n l o c k e d   * /  
     _ _ H A L _ U N L O C K ( h a d c ) ;  
      
     / *   R e t u r n   f u n c t i o n   s t a t u s   * /  
     r e t u r n   H A L _ O K ;  
 }  
  
  
 / * *  
     *   @ }  
     * /  
  
  
 / * *   @ d e f g r o u p   A D C _ E x p o r t e d _ F u n c t i o n s _ G r o u p 4   P e r i p h e r a l   S t a t e   f u n c t i o n s  
   *     @ b r i e f         P e r i p h e r a l   S t a t e   f u n c t i o n s  
   *  
 @ v e r b a t i m  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                         # # # # #   P e r i p h e r a l   S t a t e   a n d   E r r o r s   f u n c t i o n s   # # # # #  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =      
         [ . . ]  
         T h i s   s u b s e c t i o n   p r o v i d e s   f u n c t i o n s   t o   g e t   i n   r u n - t i m e   t h e   s t a t u s   o f   t h e      
         p e r i p h e r a l .  
             ( + )   C h e c k   t h e   A D C   s t a t e  
             ( + )   C h e c k   t h e   A D C   e r r o r   c o d e  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     r e t u r n   t h e   A D C   s t a t e  
     *   @ p a r a m     h a d c :   A D C   h a n d l e  
     *   @ r e t v a l   H A L   s t a t e  
     * /  
 u i n t 3 2 _ t   H A L _ A D C _ G e t S t a t e ( A D C _ H a n d l e T y p e D e f *   h a d c )  
 {  
     / *   R e t u r n   A D C   s t a t e   * /  
     r e t u r n   h a d c - > S t a t e ;  
 }  
  
 / * *  
     *   @ b r i e f     R e t u r n   t h e   A D C   e r r o r   c o d e  
     *   @ p a r a m     h a d c :   A D C   h a n d l e  
     *   @ r e t v a l   A D C   E r r o r   C o d e  
     * /  
 u i n t 3 2 _ t   H A L _ A D C _ G e t E r r o r ( A D C _ H a n d l e T y p e D e f   * h a d c )  
 {  
     r e t u r n   h a d c - > E r r o r C o d e ;  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   A D C _ P r i v a t e _ F u n c t i o n s   A D C   P r i v a t e   F u n c t i o n s  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     E n a b l e   t h e   s e l e c t e d   A D C .  
     *   @ n o t e       P r e r e q u i s i t e   c o n d i t i o n   t o   u s e   t h i s   f u n c t i o n :   A D C   m u s t   b e   d i s a b l e d  
     *                   a n d   v o l t a g e   r e g u l a t o r   m u s t   b e   e n a b l e d   ( d o n e   i n t o   H A L _ A D C _ I n i t ( ) ) .  
     *   @ p a r a m     h a d c :   A D C   h a n d l e  
     *   @ r e t v a l   H A L   s t a t u s .  
     * /  
 H A L _ S t a t u s T y p e D e f   A D C _ E n a b l e ( A D C _ H a n d l e T y p e D e f *   h a d c )  
 {  
     u i n t 3 2 _ t   t i c k s t a r t   =   0 U ;  
     _ _ I O   u i n t 3 2 _ t   w a i t _ l o o p _ i n d e x   =   0 U ;  
      
     / *   A D C   e n a b l e   a n d   w a i t   f o r   A D C   r e a d y   ( i n   c a s e   o f   A D C   i s   d i s a b l e d   o r                   * /  
     / *   e n a b l i n g   p h a s e   n o t   y e t   c o m p l e t e d :   f l a g   A D C   r e a d y   n o t   y e t   s e t ) .                       * /  
     / *   T i m e o u t   i m p l e m e n t e d   t o   n o t   b e   s t u c k   i f   A D C   c a n n o t   b e   e n a b l e d   ( p o s s i b l e       * /  
     / *   c a u s e s :   A D C   c l o c k   n o t   r u n n i n g ,   . . . ) .                                                                           * /  
     i f   ( A D C _ I S _ E N A B L E ( h a d c )   = =   R E S E T )  
     {  
         / *   E n a b l e   t h e   P e r i p h e r a l   * /  
         _ _ H A L _ A D C _ E N A B L E ( h a d c ) ;  
          
         / *   D e l a y   f o r   A D C   s t a b i l i z a t i o n   t i m e   * /  
         / *   C o m p u t e   n u m b e r   o f   C P U   c y c l e s   t o   w a i t   f o r   * /  
         w a i t _ l o o p _ i n d e x   =   ( A D C _ S T A B _ D E L A Y _ U S   *   ( S y s t e m C o r e C l o c k   /   1 0 0 0 0 0 0 U ) ) ;  
         w h i l e ( w a i t _ l o o p _ i n d e x   ! =   0 U )  
         {  
             w a i t _ l o o p _ i n d e x - - ;  
         }  
          
         / *   G e t   t i c k   c o u n t   * /  
         t i c k s t a r t   =   H A L _ G e t T i c k ( ) ;  
  
         / *   W a i t   f o r   A D C   e f f e c t i v e l y   e n a b l e d   * /  
         w h i l e ( A D C _ I S _ E N A B L E ( h a d c )   = =   R E S E T )  
         {  
             i f ( ( H A L _ G e t T i c k ( )   -   t i c k s t a r t )   >   A D C _ E N A B L E _ T I M E O U T )  
             {  
                 / *   N e w   c h e c k   t o   a v o i d   f a l s e   t i m e o u t   d e t e c t i o n   i n   c a s e   o f   p r e e m p t i o n   * /  
                 i f ( A D C _ I S _ E N A B L E ( h a d c )   = =   R E S E T )  
                 {  
                     / *   U p d a t e   A D C   s t a t e   m a c h i n e   t o   e r r o r   * /  
                     S E T _ B I T ( h a d c - > S t a t e ,   H A L _ A D C _ S T A T E _ E R R O R _ I N T E R N A L ) ;  
  
                     / *   S e t   A D C   e r r o r   c o d e   t o   A D C   I P   i n t e r n a l   e r r o r   * /  
                     S E T _ B I T ( h a d c - > E r r o r C o d e ,   H A L _ A D C _ E R R O R _ I N T E R N A L ) ;  
  
                     / *   P r o c e s s   u n l o c k e d   * /  
                     _ _ H A L _ U N L O C K ( h a d c ) ;  
  
                     r e t u r n   H A L _ E R R O R ;  
                 }  
             }  
         }  
     }  
        
     / *   R e t u r n   H A L   s t a t u s   * /  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     S t o p   A D C   c o n v e r s i o n   a n d   d i s a b l e   t h e   s e l e c t e d   A D C  
     *   @ n o t e       P r e r e q u i s i t e   c o n d i t i o n   t o   u s e   t h i s   f u n c t i o n :   A D C   c o n v e r s i o n s   m u s t   b e  
     *                   s t o p p e d   t o   d i s a b l e   t h e   A D C .  
     *   @ p a r a m     h a d c :   A D C   h a n d l e  
     *   @ r e t v a l   H A L   s t a t u s .  
     * /  
 H A L _ S t a t u s T y p e D e f   A D C _ C o n v e r s i o n S t o p _ D i s a b l e ( A D C _ H a n d l e T y p e D e f *   h a d c )  
 {  
     u i n t 3 2 _ t   t i c k s t a r t   =   0 U ;  
      
     / *   V e r i f i c a t i o n   i f   A D C   i s   n o t   a l r e a d y   d i s a b l e d   * /  
     i f   ( A D C _ I S _ E N A B L E ( h a d c )   ! =   R E S E T )  
     {  
         / *   D i s a b l e   t h e   A D C   p e r i p h e r a l   * /  
         _ _ H A L _ A D C _ D I S A B L E ( h a d c ) ;  
            
         / *   G e t   t i c k   c o u n t   * /  
         t i c k s t a r t   =   H A L _ G e t T i c k ( ) ;  
          
         / *   W a i t   f o r   A D C   e f f e c t i v e l y   d i s a b l e d   * /  
         w h i l e ( A D C _ I S _ E N A B L E ( h a d c )   ! =   R E S E T )  
         {  
             i f ( ( H A L _ G e t T i c k ( )   -   t i c k s t a r t )   >   A D C _ D I S A B L E _ T I M E O U T )  
             {  
                 / *   N e w   c h e c k   t o   a v o i d   f a l s e   t i m e o u t   d e t e c t i o n   i n   c a s e   o f   p r e e m p t i o n   * /  
                 i f ( A D C _ I S _ E N A B L E ( h a d c )   ! =   R E S E T )  
                 {  
                     / *   U p d a t e   A D C   s t a t e   m a c h i n e   t o   e r r o r   * /  
                     S E T _ B I T ( h a d c - > S t a t e ,   H A L _ A D C _ S T A T E _ E R R O R _ I N T E R N A L ) ;  
  
                     / *   S e t   A D C   e r r o r   c o d e   t o   A D C   I P   i n t e r n a l   e r r o r   * /  
                     S E T _ B I T ( h a d c - > E r r o r C o d e ,   H A L _ A D C _ E R R O R _ I N T E R N A L ) ;  
  
                     r e t u r n   H A L _ E R R O R ;  
                 }  
             }  
         }  
     }  
      
     / *   R e t u r n   H A L   s t a t u s   * /  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     D M A   t r a n s f e r   c o m p l e t e   c a l l b a c k .    
     *   @ p a r a m     h d m a :   p o i n t e r   t o   D M A   h a n d l e .  
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   A D C _ D M A C o n v C p l t ( D M A _ H a n d l e T y p e D e f   * h d m a )  
 {  
     / *   R e t r i e v e   A D C   h a n d l e   c o r r e s p o n d i n g   t o   c u r r e n t   D M A   h a n d l e   * /  
     A D C _ H a n d l e T y p e D e f *   h a d c   =   (   A D C _ H a n d l e T y p e D e f *   ) ( ( D M A _ H a n d l e T y p e D e f *   ) h d m a ) - > P a r e n t ;  
    
     / *   U p d a t e   s t a t e   m a c h i n e   o n   c o n v e r s i o n   s t a t u s   i f   n o t   i n   e r r o r   s t a t e   * /  
     i f   ( H A L _ I S _ B I T _ C L R ( h a d c - > S t a t e ,   H A L _ A D C _ S T A T E _ E R R O R _ I N T E R N A L   |   H A L _ A D C _ S T A T E _ E R R O R _ D M A ) )  
     {  
         / *   U p d a t e   A D C   s t a t e   m a c h i n e   * /  
         S E T _ B I T ( h a d c - > S t a t e ,   H A L _ A D C _ S T A T E _ R E G _ E O C ) ;  
          
         / *   D e t e r m i n e   w h e t h e r   a n y   f u r t h e r   c o n v e r s i o n   u p c o m i n g   o n   g r o u p   r e g u l a r           * /  
         / *   b y   e x t e r n a l   t r i g g e r ,   c o n t i n u o u s   m o d e   o r   s c a n   s e q u e n c e   o n   g o i n g .                 * /  
         / *   N o t e :   O n   S T M 3 2 F 1   d e v i c e s ,   i n   c a s e   o f   s e q u e n c e r   e n a b l e d                                   * /  
         / *               ( s e v e r a l   r a n k s   s e l e c t e d ) ,   e n d   o f   c o n v e r s i o n   f l a g   i s   r a i s e d               * /  
         / *               a t   t h e   e n d   o f   t h e   s e q u e n c e .                                                                             * /  
         i f ( A D C _ I S _ S O F T W A R E _ S T A R T _ R E G U L A R ( h a d c )                 & &    
               ( h a d c - > I n i t . C o n t i n u o u s C o n v M o d e   = =   D I S A B L E )       )  
         {  
             / *   S e t   A D C   s t a t e   * /  
             C L E A R _ B I T ( h a d c - > S t a t e ,   H A L _ A D C _ S T A T E _ R E G _ B U S Y ) ;        
              
             i f   ( H A L _ I S _ B I T _ C L R ( h a d c - > S t a t e ,   H A L _ A D C _ S T A T E _ I N J _ B U S Y ) )  
             {  
                 S E T _ B I T ( h a d c - > S t a t e ,   H A L _ A D C _ S T A T E _ R E A D Y ) ;  
             }  
         }  
          
         / *   C o n v e r s i o n   c o m p l e t e   c a l l b a c k   * /  
 # i f   ( U S E _ H A L _ A D C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
         h a d c - > C o n v C p l t C a l l b a c k ( h a d c ) ;  
 # e l s e  
         H A L _ A D C _ C o n v C p l t C a l l b a c k ( h a d c ) ;  
 # e n d i f   / *   U S E _ H A L _ A D C _ R E G I S T E R _ C A L L B A C K S   * /  
     }  
     e l s e  
     {  
         / *   C a l l   D M A   e r r o r   c a l l b a c k   * /  
         h a d c - > D M A _ H a n d l e - > X f e r E r r o r C a l l b a c k ( h d m a ) ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f     D M A   h a l f   t r a n s f e r   c o m p l e t e   c a l l b a c k .    
     *   @ p a r a m     h d m a :   p o i n t e r   t o   D M A   h a n d l e .  
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   A D C _ D M A H a l f C o n v C p l t ( D M A _ H a n d l e T y p e D e f   * h d m a )        
 {  
     / *   R e t r i e v e   A D C   h a n d l e   c o r r e s p o n d i n g   t o   c u r r e n t   D M A   h a n d l e   * /  
     A D C _ H a n d l e T y p e D e f *   h a d c   =   (   A D C _ H a n d l e T y p e D e f *   ) ( ( D M A _ H a n d l e T y p e D e f *   ) h d m a ) - > P a r e n t ;  
      
     / *   H a l f   c o n v e r s i o n   c a l l b a c k   * /  
 # i f   ( U S E _ H A L _ A D C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
         h a d c - > C o n v H a l f C p l t C a l l b a c k ( h a d c ) ;  
 # e l s e  
     H A L _ A D C _ C o n v H a l f C p l t C a l l b a c k ( h a d c ) ;  
 # e n d i f   / *   U S E _ H A L _ A D C _ R E G I S T E R _ C A L L B A C K S   * /  
 }  
  
 / * *  
     *   @ b r i e f     D M A   e r r o r   c a l l b a c k    
     *   @ p a r a m     h d m a :   p o i n t e r   t o   D M A   h a n d l e .  
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   A D C _ D M A E r r o r ( D M A _ H a n d l e T y p e D e f   * h d m a )        
 {  
     / *   R e t r i e v e   A D C   h a n d l e   c o r r e s p o n d i n g   t o   c u r r e n t   D M A   h a n d l e   * /  
     A D C _ H a n d l e T y p e D e f *   h a d c   =   (   A D C _ H a n d l e T y p e D e f *   ) ( ( D M A _ H a n d l e T y p e D e f *   ) h d m a ) - > P a r e n t ;  
      
     / *   S e t   A D C   s t a t e   * /  
     S E T _ B I T ( h a d c - > S t a t e ,   H A L _ A D C _ S T A T E _ E R R O R _ D M A ) ;  
      
     / *   S e t   A D C   e r r o r   c o d e   t o   D M A   e r r o r   * /  
     S E T _ B I T ( h a d c - > E r r o r C o d e ,   H A L _ A D C _ E R R O R _ D M A ) ;  
      
     / *   E r r o r   c a l l b a c k   * /  
 # i f   ( U S E _ H A L _ A D C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
     h a d c - > E r r o r C a l l b a c k ( h a d c ) ;  
 # e l s e  
     H A L _ A D C _ E r r o r C a l l b a c k ( h a d c ) ;  
 # e n d i f   / *   U S E _ H A L _ A D C _ R E G I S T E R _ C A L L B A C K S   * /  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 # e n d i f   / *   H A L _ A D C _ M O D U L E _ E N A B L E D   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * * * * * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   S T M i c r o e l e c t r o n i c s   * * * * * E N D   O F   F I L E * * * * /  